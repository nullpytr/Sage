from . import base
from .. import types
Member = types.Member

class MemberEmitter(base.GameDataEmitter):
    member: Member

    def __init__(self, member: Member) -> None:
        self.member = member

class MemberDefEmitter(MemberEmitter):
    def emit(self) -> str:
        buff: list[str] = []
        write = buff.append

        write(f"struct {self.member.name} : {self.member.basename}" + " {") # def open
        write(f"using value_type = ::{self.member.typename};")
        write("}; /* Tag::Member " + self.member.path + " close */") # def close

        return " ".join(buff)

class MemberDeclEmitter(MemberEmitter):
    def emit(self) -> str:
        buff: list[str] = []
        write = buff.append
        
        write("template <>")
        write(f"hash_t constexpr Hashtable<{self.member.path}> = murmurhash3::hash(\"{self.member.hash_text_string}\");")

        return " ".join(buff)