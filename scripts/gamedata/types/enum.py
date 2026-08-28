from .member import GameDataType, Member
from .array import Array

class Enum[EnumName: str](Member, Member.Trait.Reference):
    basename = "Tag::Enum"
    typename = "enum_t<{enum_name}>"

    values: tuple[str, ...]

    def __init__(self, name: str, hash_text_string: str, hash_hexadecimal: str, values: tuple[str, ...] = (), parent: GameDataType | None = None) -> None:
        super().__init__(name=name, hash_text_string=hash_text_string, hash_hexadecimal=hash_hexadecimal, parent=parent)
        self.values = values  

    def __repr__(self) -> str:
        repr_keys_unquoted = repr(self.values).replace("'", "")
        return f"'({self.basename}) {self.typename}{repr_keys_unquoted}'"

    def __class_getitem__(cls, enum_name: EnumName):
        return type(
            f"Enum[{enum_name}]", 
            (cls,), 
            {"typename": f"{cls.typename.format(enum_name=enum_name)}"}
        )

class EnumArray[EnumName: str](Enum[EnumName], Array[Enum[EnumName]]):
    typename = Array.typename.format(t=Enum.typename)