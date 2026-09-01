from .base import GameDataType

class Structure(GameDataType):
    basename = "Structure"
    
    children: dict[str, GameDataType]

    def __init__(self, name: str | None = None, children: dict[str, GameDataType] | None = None, parent: GameDataType | None = None) -> None:
        super().__init__(name=name or '', parent=parent)
        self.children = children or {}

    def __repr__(self) -> str:
        return str(self.children | {f"__{self.basename.upper().replace('::', '_')}_CLOSE__": self.name})

    def sort(self, by: str, key = lambda x: x, reverse: bool = False, recv: bool = True) -> None:
        sorted_children: dict[str, GameDataType] = {} # py 3.7+ keeps insertion order for dicts

        print(self.name)
        by_attr = lambda y: key(getattr(self.children[y], by))

        for k in sorted(self.children, key=by_attr, reverse=reverse):
            v = self.children[k]
            if recv and isinstance(v, Structure):
                v.sort(by=by, key=key, reverse=reverse, recv=recv)

            sorted_children[k] = v

        self.children = sorted_children

class Map(Structure):
    pass # uses the same Structure basename
