class GameDataType():
    """
    Represents an actual concrete gamedata type; that is able to emit it's own C++ representation.
    """
    basename: str = "Data::Type"
    typename: str = "..."

    name: str
    path: str