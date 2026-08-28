from pathlib import Path

from . import member
from .. import types


Enum = types.Enum

class EnumEmitter():
    @staticmethod
    def emit(enum: Enum, delim: str = "\n", header_fp: Path | str | None = None) -> str:
        buffer = member.MemberEmitter.emit(enum, delim="!", header_fp=header_fp).split("!")

        indent_depth = EnumEmitter._calc_enum_def_indent_depth(buffer)
        def_pos = EnumEmitter._calc_enum_def_insert_pos(buffer)
        buffer.insert(def_pos, EnumEmitter._enum_def(enum, delim, indent_depth + 1))

        # patch member buffer to add indentation
        buffer[def_pos + 1] = "\t" * (indent_depth + 1) + buffer[def_pos + 1] # member typedef
        buffer[-1] = "\t" * indent_depth + buffer[-1] # closing brace

        string = delim.join(buffer)
        if header_fp: Path(header_fp).write_text(string)
        return string

    @staticmethod
    def _enum_def(enum: Enum, delim: str = " ", depth: int = 0) -> str:
        buffer: list[str] = []

        write = lambda s: buffer.append("\t" * depth + s)

        inline_buffer: list[str] = []
        write_inline = inline_buffer.append

        write_inline(f"enum underlying_enum_t : {types.Hash}" " {")

        for value in enum.values:
            key = f"_{value}" if value[0].isdigit() else value
            write_inline(f"{key} = murmurhash3::hash(\"{value}\"),")
            
        write_inline("};")

        write(" ".join(inline_buffer))

        return delim.join(buffer)

    @staticmethod
    def _calc_enum_def_insert_pos(buffer: list[str]) -> int:
        for idx, string in enumerate(buffer):
            if "using" in string: return idx

        return -1

    @staticmethod
    def _calc_enum_def_indent_depth(buffer: list[str]) -> int:
        depth: int = 0
        for string in buffer:
            if "{" in string: depth += 1
            if "}" in string: break

        return depth
