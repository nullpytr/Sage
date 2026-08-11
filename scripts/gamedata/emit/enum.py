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
        member_closer = "}; /* Data::Member " + self.member.path + " close */"

        return (
            super().emit().removesuffix(member_closer)
            + self._emit_enum() # inject enum def at the end before close
            + f"\n{member_closer}"
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
