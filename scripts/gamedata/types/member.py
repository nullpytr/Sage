from .base import GameDataType

class Member(GameDataType):
    basename = "Member"
    
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
        class Pointer(Base): pass # Pointer members need indirection resolution
        class Opaque(Base): pass

    @classmethod
    def has_trait(cls, t: type[Trait.Base]) -> bool:
        return issubclass(cls, t)

