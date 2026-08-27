from . import member
from .. import types

Enum = types.Enum

class EnumEmitter():
    @staticmethod
    def emit(enum: Enum, delim: str = " ") -> str:
        buffer = member.MemberEmitter.emit(enum, delim="!").split("!")
        buffer.insert(-1, EnumEmitter._enum_def(enum, delim))
        return delim.join(buffer)

    @staticmethod
    def _enum_def(enum: Enum, delim: str = " ") -> str:
        buffer: list[str] = []
        write = buffer.append

        write(f"enum enum_type : {types.Hash}" " {")
        for value in enum.values:
            key = f"_{value}" if value[0].isdigit() else value
            write(f"{key} = murmurhash3::hash(\"{value}\"),")
        write("};")

        return delim.join(buffer)
