from .base import GameDataType

class Structure(GameDataType):
    basename = "Tag::Structure"
    
    children: dict[str, GameDataType]

    def __init__(self, name: str, path: str, children: dict[str, GameDataType]) -> None:
        self.name = name
        self.path = path
        self.children = children

    def __repr__(self) -> str:
        return str(self.children | {f"__{self.basename.upper().replace('::', '_')}_CLOSE__": self.name})