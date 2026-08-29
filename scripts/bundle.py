#!/usr/bin/env py

import argparse, sys
from pathlib import Path
from subprocess import run

PROJECT_ROOT = Path(__file__).parents[1] # scripts/..

DEFAULT_INCLUDE_DIRS = ["lib"]
DEFAULT_SOURCE_HEADER = "Sage.hpp" # relative to lib (incl dir)
DEFAULT_TARGET_HEADER = PROJECT_ROOT / "include/sage"

def hoist_includes(header_fp: Path, write: bool = False, out_fd = None, unsafe: bool = False) -> str:
    code: list[str] = [
        s.strip() for s in 
        header_fp.read_text().splitlines()
    ]

    includes: set[str] = set()

    conditional_depth = 0
    for include in code.copy(): 
        if not include: code.remove(include) # empty 
        elif include == f"#include <{header_fp.name}>": code.remove(include) # self
        elif include.startswith("#if"): conditional_depth += 1 # conditional open
        elif include.startswith("#endif"): conditional_depth -= 1 # conditional close
        elif (conditional_depth > 0) and (not unsafe): continue # inside conditional
        elif include.startswith("#include"): 
            includes.add(popitem(code, include))
            if out_fd: print(include, file=out_fd)

    string = "\n".join([*sorted(includes), *code])
    if write: header_fp.write_text(string)

    return string

def popitem[T](l: list[T], item: T) -> T:
    return l.pop(l.index(item))

def build_parser() -> argparse.ArgumentParser:
    p = argparse.ArgumentParser(
        prog="bundle",
        description="Bundle Sage headers into a single self-contained file.",
    )

    p.add_argument(
        "source",
        type=Path,
        nargs="?",
        default=DEFAULT_SOURCE_HEADER,
        help=f"Top-level source header to bundle (default: {DEFAULT_SOURCE_HEADER})",
    )
    p.add_argument(
        "--out", "-o",
        type=Path,
        default=DEFAULT_TARGET_HEADER,
        metavar="FILE",
        help=f"Output header path (default: {DEFAULT_TARGET_HEADER})",
    )
    p.add_argument(
        "--include", "-I",
        action="append",
        metavar="DIR",
        help=f"Additional include search directories; may be repeated (default: [{','.join(DEFAULT_INCLUDE_DIRS)}])",
    )

    p.add_argument(
    "--unsafe", "-u",
    action="store_true",
    help="Also hoist includes inside conditional blocks, WILL break the conditional logic",
    )

    p.add_argument(
    "--quiet", "-q",
    action="store_true",
    help="Do not output list of hoisted includes",
    )

    return p

def main():
    args = build_parser().parse_args()

    run(
        ["python3", "-m", "quom"] +
        [f"{args.source}", f"{args.out}"] +
        [f"-I{d}" for d in (args.include or DEFAULT_INCLUDE_DIRS)]
    ) # blocking, wait

    hoist_includes(
        args.out, 
        write=True, 
        out_fd=None if args.quiet else sys.stdout, 
        unsafe=args.unsafe
    )

if __name__ == "__main__":
    main()
