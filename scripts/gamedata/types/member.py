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
        return f"{self.typename} {self.name};"