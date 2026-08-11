from .member import Member

class Enum[EnumName: str](Member):
    basename = "Data::Enum"
    typename = "Enum::...<...>"

    keys: tuple[str, ...]

    def __init__(self, name: str, path: str, hash_text_string: str, keys: tuple[str, ...]) -> None:
        self.name = name
        self.path = path
        self.hash_hexadecimal = '...' # FIXME
        self.hash_text_string = hash_text_string
        self.keys = keys  

    def __repr__(self) -> str:
        repr_keys_unquoted = repr(self.keys).replace("'", "")
        return f"'Enum({self.name}, value_type {self.typename} : {repr_keys_unquoted})'"

    def __class_getitem__(cls, enum_name: EnumName):
        return type(
            f"Enum[{enum_name}]", 
            (cls,), 
            {"typename": f"{cls.typename.format(enum_name=enum_name)}"}
        )

class EnumScalar[EnumName: str](Enum[EnumName]):
    typename = "Enum::Scalar<{enum_name}>"

class EnumArray[EnumName: str](Enum[EnumName]):
    typename = "Enum::Array<{enum_name}>"