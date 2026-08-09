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

        write(f"struct {self.member.name} : Data::Member" + " {") # def open
        write(f"using value_type = {self.member.typename};")

        # promise implicit conversion
        write("constexpr operator Promise<value_type>() noexcept { return { murmurhash3::hash(\"" + self.member.hash_text_string + "\") }; }")

        write("}; /* Data::Member " + self.member.path + " close */") # def close

        return "\n".join(buff)

class MemberDeclEmitter(MemberEmitter):
    def emit(self) -> str:
        return f"{self.member.path}::value_type {self.member.name};"