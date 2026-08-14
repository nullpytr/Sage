from .. import types

Member = types.Member

class MemberEmitter():
    @staticmethod
    def emit(member: Member, delim: str = " ") -> str:
        buffer: list[str] = []
        write = buffer.append

        write(f"struct {member.name} : {member.basename}" " {") # def open
        write(f"using value_type = ::{member.typename};")
        write("};") # def close

        return delim.join(buffer)