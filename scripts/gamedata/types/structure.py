from .base import GameDataType
from .member import Member, MemberWrapperStructure
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

        write(f"struct {self.name} : GameDataStructure" + " {") # struct open
        for child_name, child_val in self.children.items(): # child defs
            print(f"[gd/struct/emit]: processing child {child_name}")
            if isinstance(child_val, Member): write(MemberWrapperStructure(child_val).emit())
            else: write(child_val.emit())

        write("struct value_type {") # impl open
        for child_name, child_val in self.children.items(): # child decls
            if isinstance(child_val, Member): 
                write(f"{child_val.name}::value_type {child_val.name};")
            elif isinstance(child_val, Structure):
                write(f"{child_name}::value_type {child_name};") 
            elif isinstance(child_val, EnumWrapperStructure):
                write(f"{child_name} {child_name};")
            elif isinstance(child_val, Enum):
                assert False, f"[gd/struct/emit]: node {self.name} has unexpected child of type {child_name}"

        write("template <typename Sav>")
        write(f"explicit value_type(Sav& s) : ")
        
        for child_name, child_val in self.children.items(): # member inits
            if isinstance(child_val, Structure):
                write(f"{child_name}" + " { s },")
            else:
                write(f"{child_name}" + " { " + f"s.get({child_name}::metadata)" + " },")
        buff[-1] = buff[-1][:-1] # strip last comma
        write("{ }")

        write("};") # impl close

        # write("struct metadata {") # promise decls open
        # for child_name, child_val in self.children.items(): 
        #     if isinstance(child_val, (Structure)): continue
        #     elif isinstance(child_val, EnumWrapperStructure): child_val = child_val.value_type
        #     assert isinstance(child_val, (Member, Enum))
        #     write(f"static constexpr ::Promise<typeof(data::{child_name})> {child_name}" + " { murmurhash3::hash(\"" + child_val.hash_text_string + "\") };")
        # write("};") # promise close

        write("};") # struct close
        # write(f"using {self.name}_t = {self.name};")

        return "\n".join(buff)