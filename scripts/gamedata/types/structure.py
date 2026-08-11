from .base import GameDataType
from .member import Member
from .enum import Enum, EnumWrapperStructure

class Structure(GameDataType):
    name: str
    children: dict[str, GameDataType]

    def __init__(self, name: str, children: dict[str, GameDataType]) -> None:
        self.name = name
        self.children = children

    def __repr__(self) -> str:
        return str(self.children | {"__GAMEDATA_STRUCT_NAME__": self.name})

    def emit(self) -> str:
        buff: list[str] = []
        write = buff.append

        # write("#pragma once") # header guard
        # write("")

        # write("#include \"Core/Types.hpp\"") # includes
        # write("#include \"Core/Promise.hpp\"")
        # write("#include \"Core/MurmurHash3.hpp\"")

        write(f"struct {self.name}" + "{") # struct open

        for child_name, child_val in self.children.items(): # children
            print(f"[gd/struct/emit]: processing child {child_name}")
            write(child_val.emit())

            # structs & enums do not emit their member declarations (only definition)
            # so we'll do it here
            if isinstance(child_val, Structure):
                write(f"{child_name}_t {child_name};") 
            elif isinstance(child_val, EnumWrapperStructure):
                write(f"{child_name}_t {child_name};")
            elif isinstance(child_val, Enum):
                assert False, f"[gd/struct/emit]: node {self.name} has unexpected child of type {child_name}"

        write("template <typename Sav>")
        write(f"explicit {self.name}(Sav& s) : ")
        
        for child_name, child_val in self.children.items(): # member inits
            if isinstance(child_val, Structure):
                write(f"{child_name}" + " { s },")
            else:
                write(f"{child_name}" + " { " + f"s.get(Promise::{child_name})" + " },")
        buff[-1] = buff[-1][:-1] # strip last comma
        write("{ }")

        write("struct Promise {") # promise decls open
        for child_name, child_val in self.children.items(): 
            if isinstance(child_val, (Structure)): continue
            elif isinstance(child_val, EnumWrapperStructure): child_val = child_val.value_type
            assert isinstance(child_val, (Member, Enum))
            write(f"static constexpr ::Promise<typeof({child_name})> {child_name}" + " { murmurhash3::hash(\"" + child_val.hash_text_string + "\") };")
        write("};") # promise close
        
        write("};") # struct close
        write(f"using {self.name}_t = {self.name};")

        return "\n".join(buff)