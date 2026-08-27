from .base import GameDataType

class Member(GameDataType):
    basename = "Tag::Member"
    
    hash_text_string: str
    hash_hexadecimal: str

    def __init__(self, name: str, path: str, hash_text_string: str, hash_hexadecimal: str) -> None:
        self.name = name
        self.path = path
        self.hash_text_string = hash_text_string
        self.hash_hexadecimal = hash_hexadecimal

    def __repr__(self) -> str:
        return f"'({self.basename}) {self.typename}({self.name}, {self.hash_text_string}, {self.hash_hexadecimal})'"


    class Trait():
        class Base: pass
        class View(Base): pass # View types need layout adapters
        class Pointer(Base): pass # Pointer types need indirection resolution

    @classmethod
    def has_trait(cls, t: type[Trait.Base]) -> bool:
        return issubclass(cls, t)

