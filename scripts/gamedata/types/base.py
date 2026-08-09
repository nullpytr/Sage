class GameDataType():
    """
    Represents an actual concrete gamedata type; that is able to emit it's own C++ representation.
    """
    typename: str = "..."

    name: str
    path: str