class Typename: 
    typename: str

    def __init__(self, typename: str) -> None:
        self.typename = typename

    def __repr__(self) -> str:
        return self.typename

    def __str__(self) -> str:
        return repr(self)

Hash = Typename("hash_t")
HashtableEntry = Typename("hash_value_t")