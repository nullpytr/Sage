from .base import GameDataType
from .structure import Structure

class Member(GameDataType):
    basename = "Tag::Member"
    
    hash_text_string: str
    hash_hexadecimal: str

    def __init__(self, name: str, hash_text_string: str, hash_hexadecimal: str, parent: GameDataType | None = None) -> None:
        super().__init__(name=name, parent=parent)
        self.hash_text_string = hash_text_string
        self.hash_hexadecimal = hash_hexadecimal

    def __repr__(self) -> str:
        return f"'({self.basename}) {self.typename}({self.name}, {self.hash_text_string}, {self.hash_hexadecimal})'"


    class Trait():
        class Base: pass
        class Transparent(Base): pass # Transparent members can be returned directly
        class Reference(Transparent): pass # Reference members are also transparent
        class Pointer(Base): pass # Pointer members need indirection resolution

    @classmethod
    def has_trait(cls, t: type[Trait.Base]) -> bool:
        return issubclass(cls, t)

