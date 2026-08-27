class _Hash: 
    typename = "mmh32"

    def __repr__(self) -> str:
        return self.typename

    def __str__(self) -> str:
        return repr(self)

Hash = _Hash()