#!/usr/bin/env py

import os, sys, argparse, json
from contextlib import redirect_stdout
from shutil import rmtree
from pathlib import Path

from gamedata import *

PROJECT_ROOT = Path(__file__).parents[1] # scripts/..
PRESETS_DIR = PROJECT_ROOT / "data" / "presets"
PRESET_CHOICES = tuple(sorted(p.stem for p in PRESETS_DIR.iterdir()))

SINK_FD = open(os.devnull, "w")

DEFAULT_PRESET_CHOICE = "medium"
DEFAULT_OUTPUT_DIR = PROJECT_ROOT / "lib"
DEFAULT_TOP_LEVEL_HEADER_NAME = "GameData"

def build_parser() -> argparse.ArgumentParser:
    p = argparse.ArgumentParser(
        prog="gamedata",
        description="Regenerate Sage C++ headers from a preset or metadata file.",
    )

    src = p.add_mutually_exclusive_group()
    src.add_argument(
        "--preset", "-p",
        choices=PRESET_CHOICES,
        default=DEFAULT_PRESET_CHOICE,
        metavar="PRESET",
        help=f"Metadata preset to use: ({' | '.join(PRESET_CHOICES)}) (default: {DEFAULT_PRESET_CHOICE}); mutually exclusive with --metadata",
    )
    src.add_argument(
        "--metadata", "-m",
        type=Path,
        default=None,
        metavar="FILE",
        help="Path to an arbitrary metadata file; mutually exclusive with --preset",
    )

    p.add_argument(
        "--out", "-o",
        type=Path,
        default=DEFAULT_OUTPUT_DIR,
        metavar="DIR",
        help=f"Output directory for generated headers (default: {DEFAULT_OUTPUT_DIR})",
    )

    spec = p.add_mutually_exclusive_group()
    spec.add_argument(
        "--name", "-n", 
        metavar="NAME",
        default=DEFAULT_TOP_LEVEL_HEADER_NAME,
        help=f"Top-level structure/header name (default: {DEFAULT_TOP_LEVEL_HEADER_NAME}); mutually exclusive with --pick",
    )
    spec.add_argument(
        "--pick", "-q",
        type=Picker,
        default=None,
        metavar="PICKER",
        help="Cherry-pick a single tag type by :: path (e.g. OwnedHorseList::Body::EyeColor); output header/directory name matches the tag type; mutually exclusive with --name",
    )

    p.add_argument(
        "--standalone", "-s",
        action="store_true",
        help="Emit a single combined header instead of per-subsytem files",
    )
    p.add_argument(
        "--dry",
        action="store_true",
        help="Parse the tree without writing any files",
    )
    p.add_argument(
        "--tree",
        action="store_true",
        help="Only generate the type tree as JSON and exit",
    )
    p.add_argument(
        "--verbose", "-v",
        action="store_true",
        help="Show parser and emitter debug output (suppressed by default)",
    )

    cleanup = p.add_mutually_exclusive_group()
    cleanup.add_argument(
        "--clear", "-c",
        action="store_true",
        help="Delete generated headers without regenerating; mutually exclusive with --dirty",
    )
    cleanup.add_argument(
        "--dirty",
        action="store_true",
        help="Skip deleting the output directory before writing; mutually exclusive with --clear",
    )

    return p

def run(args: argparse.Namespace) -> None:
    verbose_fd = sys.stdout if args.verbose else SINK_FD

    data_fp = None
    if not args.clear: # clear overrides everything else
        data_fp = resolve_datafile(args)
        assert data_fp.exists(), f"metadata file does not exist: {data_fp}"

    picker = Picker(args.pick)
    if picker and args.name == DEFAULT_TOP_LEVEL_HEADER_NAME:
        args.name = picker.id_list[-1]

    with redirect_stdout(verbose_fd):
        root = tree.Tree(args.name)
        if data_fp: tree.make_tree(data_fp.open("r"), root)

        root.sort(by="name") # sort: alpha A -> Z
        root.sort(by="basename", key=("Tag::Member", "Tag::Enum", "Tag::Structure").index)

    if args.tree and data_fp: return print(json.dumps(as_dict(root), indent=2))
    if args.dry and data_fp: return print("[cli/dry]", f"parsed {data_fp.name}")

    out_dir = Path(args.out)
    header_dir = out_dir / str(args.name)
    header_file = header_dir.with_suffix(".hpp")

    should_clear_header_dir = not (args.standalone or args.dirty) 
    if should_clear_header_dir and header_dir.exists():
        rmtree(header_dir)
        print("[cli/clear]", f"cleared {header_dir}")

    should_clear_header_file = (not args.dirty)
    if should_clear_header_file and header_file.exists(): 
        header_file.unlink()
        print("[cli/clear]", f"cleared {header_file}")

    if args.clear: return 

    if picker: root = picker.root(root)
    args.standalone = args.standalone or isinstance(root, types.Member) # member always standalone
    
    emitter = picker.emitter(root)
    with redirect_stdout(verbose_fd):
        if args.standalone: emitter.emit(root, header_fp=header_file) # type: ignore
        else: emitter.emit(root, include_dir=out_dir) # type: ignore

    if not args.standalone: print(header_dir)
    print(header_file)

def main() -> None:
    try: run(build_parser().parse_args())
    except AssertionError as err: 
        print("[cli/error]", err, file=sys.stderr)
        sys.exit(1)

    sys.exit(0)

def as_dict(t: types.GameDataType) -> dict:
    s = repr(t).replace("'", '"')
    return json.loads(s)

def resolve_datafile(args: argparse.Namespace) -> Path:
    if args.metadata: return args.metadata

    preset_file = PRESETS_DIR / f"{args.preset}.txt"
    assert preset_file.exists(), f"preset does not exist: {args.preset}"

    return preset_file

class Picker():
    DELIM: str = "::"

    id_list: list[str]

    def __init__(self, x: "str | Picker | None") -> None:
        if isinstance(x, Picker): self.id_list = x.id_list
        elif isinstance(x, str): self.id_list = x.split(self.DELIM)
        else: self.id_list = []

    def __bool__(self) -> bool:
        return bool(self.id_list)

    def root(self, t: tree.Tree) -> types.GameDataType:
        result: types.GameDataType = t # decay
        for id in self.id_list:
            assert isinstance(result, tree.Tree), "unexpected: non-leaf non-tree type"
            assert id in result.children, f"type {id} does not exist"
            result = result.children[id] # non-leaf; keep going

        result.parent = None # re-root
        return result

    def emitter(self, node: types.GameDataType):
        if isinstance(node, tree.Tree): return tree.TreeEmitter
        elif isinstance(node, types.Enum): return emit.enum.EnumEmitter
        elif isinstance(node, types.Member): return emit.member.MemberEmitter
        else: raise AssertionError(f"[cli/emit] unknown node type {type(node)} found")
         
    
if __name__ == "__main__":
    main()
