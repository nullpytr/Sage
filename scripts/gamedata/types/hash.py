class _Hash: 
    typename = "hash_t"

    def __repr__(self) -> str:
        return self.typename

    def __str__(self) -> str:
        return repr(self)

Hash = _Hash()