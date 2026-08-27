from .member import Member
from .array import Array

class Enum(Member, Member.Trait.View):
    basename = "Tag::Enum"
    typename = "enum_t<values_t>"

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

class EnumArray(Array[Enum], Enum):
    pass