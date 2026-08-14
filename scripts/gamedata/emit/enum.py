from . import member
from .. import types
Enum = types.Enum

class EnumEmitter(member.MemberEmitter):
    @property
    def enum(self) -> Enum:
        assert isinstance(self.member, Enum)
        return self.member

class EnumDefEmitter(EnumEmitter, member.MemberDefEmitter):
    def emit(self) -> str:
        closing_brace = "}; /*"

        return (
            super().emit()
            # inject enum def at the end before close
            .replace(closing_brace, f"{self._emit_enum()}\n{closing_brace}")
        )
    
    def _emit_enum(self) -> str:
        buff: list[str] = []
        write = buff.append

        write("enum enum_type : mmh32 {")
        for key in self.enum.keys:
            if key[0].isdigit(): key = f"_{key}"
            write(f"{key} = murmurhash3::hash(\"{key}\"),")
        write("};")

        return "\n".join(buff)

class EnumDeclEmitter(EnumEmitter, member.MemberDeclEmitter):
    pass
