from .base import GameDataType
from .member import *
from .enum import *

class Structure(GameDataType):
    name: str
    children: dict[str, GameDataType]

    def __init__(self, name: str, children: dict[str, GameDataType]) -> None:
        self.name = name
        self.children = children

    def __repr__(self) -> str:
        return str(self.children | {"__GAMEDATA_STRUCT_NAME__": self.name})