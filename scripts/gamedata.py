#!/usr/bin/env py

import os, sys, argparse, json
from contextlib import redirect_stdout
from shutil import rmtree
from pathlib import Path

from gamedata import tree

PROJECT_ROOT = Path(__file__).parents[1] # scripts/..
PRESETS_DIR = PROJECT_ROOT / "data" / "presets"
PRESET_CHOICES = tuple(sorted(p.stem for p in PRESETS_DIR.iterdir()))

SINK_FD = open(os.devnull, "w")

def as_dict(t: tree.Tree) -> dict:
    s = repr(t).replace("'", '"')
    return json.loads(s)

def resolve_datafile(args: argparse.Namespace) -> Path:
    if args.metadata: return args.metadata

    preset_file = PRESETS_DIR / f"{args.preset}.txt"
    assert preset_file.exists(), f"preset does not exist: {args.preset}"

    return preset_file

def build_parser() -> argparse.ArgumentParser:
    p = argparse.ArgumentParser(
        prog="gamedata",
        description="Regenerate Sage C++ headers from a preset or metadata file.",
    )

    src = p.add_mutually_exclusive_group()
    src.add_argument(
        "--preset", "-p",
        choices=PRESET_CHOICES,
        default="medium",
        metavar="PRESET",
        help=f"Metadata preset to use: ({' | '.join(PRESET_CHOICES)}) (default: medium)",
    )
    src.add_argument(
        "--metadata", "-m",
        type=Path,
        default=None,
        metavar="FILE",
        help="Path to a metadata file (overrides --preset)",
    )

    p.add_argument(
        "--out", "-o",
        type=Path,
        default=PROJECT_ROOT / "lib",
        metavar="DIR",
        help="Output directory for generated headers (default: lib/)",
    )
    p.add_argument(
        "--name", "-n",
        default="GameData",
        metavar="NAME",
        help="Aggregate header name (default: GameData)",
    )
    p.add_argument(
        "--standalone", "-s",
        action="store_true",
        help="Emit only single standalone header"
    )
    p.add_argument(
        "--dry",
        action="store_true",
        help="Parse tree without writing any files",
    )
    p.add_argument(
        "--tree",
        action="store_true",
        help="Print the parsed type tree as JSON",
    )
    p.add_argument(
        "--verbose", "-v",
        action="store_true",
        help="Show output from the parser and emitter",
    )

    cleanup = p.add_mutually_exclusive_group()
    cleanup.add_argument(
        "--clear", "-c",
        action="store_true",
        help="Clear all generated headers (does nothing else)",
    )
    cleanup.add_argument(
        "--dirty",
        action="store_true",
        help="Keep the existing output directory instead of deleting it first",
    )

    return p

def run(args: argparse.Namespace) -> None:
    verbose_fd = sys.stdout if args.verbose else SINK_FD

    data_fp = None
    if not args.clear: # clear overrides everything else
        data_fp = resolve_datafile(args)
        assert data_fp.exists(), f"metadata file does not exist: {data_fp}"

    with redirect_stdout(verbose_fd):
        gamedata = tree.Tree(name=args.name, path=args.name, children={})
        if data_fp: tree.make_tree(data_fp.open("r"), gamedata)

    if args.tree and data_fp: return print(json.dumps(as_dict(gamedata), indent=2))
    if args.dry and data_fp: return print("[cli/dry]", f"parsed {data_fp.name}")

    out_dir = Path(args.out)
    header_dir = out_dir / str(args.name)
    header_file = header_dir.with_suffix(".hpp")

    should_clear_header_dir =  not (args.standalone or args.dirty) 
    if should_clear_header_dir and header_dir.exists():
        rmtree(header_dir)
        print("[cli/clear]", f"cleared {header_dir}")

    should_clear_header_file = (not args.dirty)
    if should_clear_header_file and header_file.exists(): 
        header_file.unlink()
        print("[cli/clear]", f"cleared {header_file}")

    if args.clear: return 

    emit = tree.TreeEmitter.emit
    with redirect_stdout(verbose_fd):
        if args.standalone: emit(gamedata, header_fp=header_file)
        else: emit(gamedata, include_dir=out_dir)

    print(header_file)
    if not args.standalone: print(header_dir)

def main() -> None:
    try: run(build_parser().parse_args())
    except AssertionError as err: 
        print("[cli/error]", err, file=sys.stderr)
        sys.exit(1)

    sys.exit(0)

if __name__ == "__main__":
    main()
