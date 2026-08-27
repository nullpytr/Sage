from . import member
from .. import types

ENUM_INDENT_DEPTH = 2
ENUM_DEF_INSERT_POS = 1 # insert enum def just before member typedef

Enum = types.Enum

class EnumEmitter():
    @staticmethod
    def emit(enum: Enum, delim: str = "\n") -> str:
        buffer = member.MemberEmitter.emit(enum, delim="!").split("!")
        buffer.insert(ENUM_DEF_INSERT_POS, EnumEmitter._enum_def(enum, delim))

        # patch member buffer to add indentation
        buffer[ENUM_DEF_INSERT_POS + 1] = "\t" * ENUM_INDENT_DEPTH + buffer[ENUM_DEF_INSERT_POS + 1] # member typedef
        buffer[-1] = "\t" * (ENUM_INDENT_DEPTH - 1) + buffer[-1] # closing brace

        return delim.join(buffer)

    @staticmethod
    def _enum_def(enum: Enum, delim: str = " ") -> str:
        buffer: list[str] = []

        depth = ENUM_INDENT_DEPTH
        write = lambda s: buffer.append("\t" * depth + s)

        inline_buffer: list[str] = []
        write_inline = inline_buffer.append

        write_inline("using values_t = struct {")
        write_inline(f"enum underlying_enum_t : {types.Hash}" " {")

        for value in enum.values:
            key = f"_{value}" if value[0].isdigit() else value
            write_inline(f"{key} = murmurhash3::hash(\"{value}\"),")
            
        
        write_inline("};")
        write_inline("};")

        write(" ".join(inline_buffer))

        return delim.join(buffer) 
