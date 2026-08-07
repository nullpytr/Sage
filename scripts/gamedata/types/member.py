from .base import GameDataType

class Member(GameDataType):
    name: str
    hash_text_string: str
    hash_hexadecimal: str

    def __init__(self, name: str, hash_text_string: str, hash_hexadecimal: str) -> None:
        self.name = name
        self.hash_text_string = hash_text_string
        self.hash_hexadecimal = hash_hexadecimal

    def __repr__(self) -> str:
        return f"'({self.typename}, {self.name}, {self.hash_text_string}, {self.hash_hexadecimal})'"

    def emit(self) -> str:
        return "" # v3.1: emit is for type definitions only; decls emitted by owner (parent)

class MemberWrapperStructure(Member):
    basename: str = "GameDataMember"

    def __init__(self, member: Member) -> None:
        super().__init__(
            name=member.name, 
            hash_text_string=member.hash_text_string, 
            hash_hexadecimal=member.hash_hexadecimal
        )
        self.typename = member.typename
        self.member = member

    def emit(self) -> str:
        buff: list[str] = []
        write = buff.append

        write(f"struct {self.name} : {self.basename}" + " {") # wrapper open
        write(f"using value_type = {self.typename};")

        write(self.member.emit())

        # write("value_type value;")

        # write("template <typename Sav>")
        # write(f"explicit {self.name}(Sav& s) : ")
        # write("value { s.get(metadata) }")
        # write("{ }")

        # promise
        write("static constexpr Promise<value_type> metadata { murmurhash3::hash(\"" + self.hash_text_string + "\") };")
        write("};")

        return "\n".join(buff)
