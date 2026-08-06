from .base import GameDataType

class Enum[EWSName: str](GameDataType):
    typename = "Enum::...<...>"
    
    name: str
    hash_text_string: str
    keys: tuple[str, ...]

    def __init__(self, name: str, hash_text_string: str, keys: tuple[str, ...]) -> None:
        self.name = name
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

    def emit(self) -> str:
        buff: list[str] = []
        write = buff.append

        write("enum value_type : mmh32 {")
        for key in self.keys:
            if key[0].isdigit(): key = f"_{key}"
            write(f"{key} = murmurhash3::hash(\"{key}\"),")
        write("};")

        return "\n".join(buff)

class EnumScalar[EWSName: str](Enum[EWSName]):
    typename = "Enum::Scalar<{ews}>"

class EnumArray[EWSName: str](Enum[EWSName]):
    typename = "Enum::Array<{ews}>"

class EnumWrapperStructure(GameDataType):
    name: str
    value_type: Enum

    def __init__(self, name: str, value_type: Enum) -> None:
        self.name = name
        self.value_type = value_type

    def __repr__(self) -> str:
        return repr(self.value_type)

    def emit(self) -> str:
        buff: list[str] = []
        write = buff.append

        write(f"struct {self.name}" + " {")
        write(self.value_type.emit())
        write("};")

        # write(f"using {self.value_type.name}_t = {self.value_type.typename};")

        return "\n".join(buff)