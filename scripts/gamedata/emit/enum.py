from . import member
from .. import types

Enum = types.Enum

class EnumEmitter():
    @staticmethod
    def emit(enum: Enum, delim: str = " ") -> str:
        return (
            member.MemberEmitter
            .emit(enum) \
            .replace("};", EnumEmitter._enum_def(enum) + " };")
        )

    @staticmethod
    def _enum_def(enum: Enum, delim: str = " ") -> str:
        buffer: list[str] = []
        write = buffer.append

        write("enum enum_type : mmh32 {")
        for key in enum.keys:
            if key[0].isdigit(): key = f"_{key}"
            write(f"{key} = murmurhash3::hash(\"{key}\"),")
        write("};")

        return delim.join(buffer)
