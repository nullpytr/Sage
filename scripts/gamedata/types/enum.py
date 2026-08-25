from .member import MemberView

class Enum[EnumName: str](MemberView):
    basename = "Tag::Enum"
    typename = "::Enum::...<...>"

    values: tuple[str, ...]

    def __init__(self, name: str, path: str, hash_text_string: str, hash_hexadecimal: str, values: tuple[str, ...] = ()) -> None:
        self.name = name
        self.path = path
        self.hash_text_string = hash_text_string
        self.hash_hexadecimal = hash_hexadecimal
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

class EnumScalar[EnumName: str](Enum[EnumName]):
    typename = "::Enum::Scalar<{enum_name}>"

class EnumArray[EnumName: str](Enum[EnumName]):
    typename = "::Enum::Array<{enum_name}>"