from .member import Member

class Enum[EWSName: str](Member):
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
        return f"'(EnumWrapperStruct {self.name}, value_type {self.typename}, EnumValues {repr_keys_unquoted})'"

    def __class_getitem__(cls, ews_name: EWSName):
        return type(
            f"Enum[{ews_name}]", 
            (cls,), 
            {"typename": f"{cls.typename.format(ews=ews_name)}"}
        )

class EnumScalar[EWSName: str](Enum[EWSName]):
    typename = "Enum::Scalar<{ews}>"

class EnumArray[EWSName: str](Enum[EWSName]):
    typename = "Enum::Array<{ews}>"