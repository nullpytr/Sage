from .base import GameDataType
from .member import *
from .enum import *

class Structure(GameDataType):
    basename = "Data::Structure"
    
    children: dict[str, GameDataType]

    def __init__(self, name: str, path: str, children: dict[str, GameDataType]) -> None:
        self.name = name
        self.path = path
        self.children = children

    def __repr__(self) -> str:
        return str(self.children | {"__GAMEDATA_STRUCT_NAME__": self.name})