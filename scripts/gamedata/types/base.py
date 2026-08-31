class GameDataType():
    """
    Represents an actual concrete gamedata type; that is able to emit it's own C++ representation.
    """
    basename: str = "Type"
    typename: str = "..."

    name: str
    parent: "GameDataType | None"

    def __init__(self, name: str, parent: "GameDataType | None" = None) -> None:
        self.name = name
        self.parent = parent

    @property
    def path(self) -> str:
        return f"{self.parent.path + self.PATH_DELIM if self.parent else ''}{self.name}"

    PATH_DELIM = "::"