from .base import GameDataType

class Structure(GameDataType):
    basename = "Tag::Structure"
    
    children: dict[str, GameDataType]

    def __init__(self, name: str | None = None, children: dict[str, GameDataType] | None = None, parent: GameDataType | None = None) -> None:
        super().__init__(name=name or '', parent=parent)
        self.children = children or {}

    def __repr__(self) -> str:
        return str(self.children | {f"__{self.basename.upper().replace('::', '_')}_CLOSE__": self.name})