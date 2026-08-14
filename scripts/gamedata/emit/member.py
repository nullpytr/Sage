from . import base
from .. import types
Member = types.Member

class MemberEmitter(base.GameDataEmitter):
    member: Member

    def __init__(self, member: Member) -> None:
        self.member = member

    def emit(self) -> str:
        buff: list[str] = []
        write = buff.append

        write(f"struct {self.member.name} : {self.member.basename}" + " {") # def open
        write(f"using value_type = ::{self.member.typename};")
        write("};") # def close

        return " ".join(buff)