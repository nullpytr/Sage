from . import base, member, enum
from .. import types
Structure = types.Structure

class StructureEmitter(base.GameDataEmitter):
    structure: Structure

    def __init__(self, structure: Structure) -> None:
        self.structure = structure

class StructureDeclEmitter(StructureEmitter):
    def emit(self) -> str:
        raise NotImplementedError # TODO
    
    def _emit(self) -> str:
        buff: list[str] = []
        write = buff.append

        write("struct value_type {") # impl open
        for child_name, child_val in self.structure.children.items(): # child decls
            write(f"{child_name}::value_type {child_name};") 

        write("template <typename Sav>")
        write(f"value_type(Sav& s) : ")
        
        for child_name, child_val in self.structure.children.items(): # member inits
            if isinstance(child_val, Structure):
                write(f"{child_name}" + " { s },")
            else:
                write(f"{child_name}" + " { " + f"s.get((Promise<{child_name}::value_type>)(struct {child_name})" + "{ }) },")
        buff[-1] = buff[-1][:-1] # strip last comma
        write("{ }")

        write("};") # impl close
        return "\n".join(buff)

class StructureDefEmitter(StructureEmitter):
    def emit(self) -> str:
        buff: list[str] = []
        write = buff.append

        write(f"struct {self.structure.name} : Data::Structure" + " {") # struct open
        for child_name, child_val in self.structure.children.items(): # child defs
            print(f"[gd/struct/emit]: processing child {child_name}")
            if isinstance(child_val, Structure): write(StructureDefEmitter(child_val).emit())
            elif isinstance(child_val, enum.Enum): write(enum.EnumDefEmitter(child_val).emit())
            elif isinstance(child_val, member.Member): write(member.MemberDefEmitter(child_val).emit())
            else: assert False, f"[gd/struct/emit]: node {self.structure.name} has unexpected child of type {child_name}"

        write(StructureDeclEmitter(self.structure)._emit()) # decl inline (classic version -- gd v3.x)

        write("}; /* GameDataStructure close */") # struct close

        return "\n".join(buff)