from . import base, member, enum
from .. import types
Structure = types.Structure

class StructureEmitter(base.GameDataEmitter):
    structure: Structure

    def __init__(self, structure: Structure) -> None:
        self.structure = structure

class StructureDeclEmitter(StructureEmitter):
    def emit(self) -> str:
        buff: list[str] = []
        write = buff.append
        
        for child_path, child_val in self.structure.children.items(): # out-of-line child decls (gd v4.x)
            print(f"[gd/struct/emit/decl]: processing child {child_path}")
            if isinstance(child_val, Structure): write(StructureDeclEmitter(child_val).emit())
            elif isinstance(child_val, member.Member): write(member.MemberDeclEmitter(child_val).emit())
            else: assert False, f"[gd/struct/emit]: node {self.structure.name} has unexpected child of type ({type(child_val)}, {child_val.typename}) {child_path}"

        write(f"template <> struct View<{self.structure.path}> : {self.structure.path}" + " {") # decl open
        for child_path, child_val in self.structure.children.items(): # member decls
            if isinstance(child_val, Structure): write(f"View<{child_val.name}> {child_val.name};")
            elif isinstance(child_val, member.Member): write(f"{child_val.name}::value_type {child_val.name};")
            else: assert False, f"[gd/struct/emit]: node {self.structure.name} has unexpected child of type ({type(child_val)}, {child_val.typename}) {child_path}"

        write("View(Sav& s) : ") # ctor open
                
        for child_path, child_val in self.structure.children.items(): # member inits
            if isinstance(child_val, Structure):  write(f"{child_val.name}" + " { s },")
            elif isinstance(child_val, member.Member): write(f"{child_val.name}" + " { " + f"s.get<struct {child_val.name}>()" + " },")
            else: assert False, f"[gd/struct/emit]: node {self.structure.name} has unexpected child of type ({type(child_val)}, {child_val.typename}) {child_path}"

        buff[-1] = buff[-1][:-1] # strip last comma
        write("{ }") # ctor close

        
        write("}; /* Data::View " + self.structure.path + " close */") # def close

        return "\n".join(buff)

class StructureDefEmitter(StructureEmitter):
    def emit(self) -> str:
        buff: list[str] = []
        write = buff.append

        write(f"struct {self.structure.name} : Data::Structure" + " {") # def open
        for child_path, child_val in self.structure.children.items(): # child defs
            print(f"[gd/struct/emit/def]: processing child {child_path}")
            if isinstance(child_val, Structure): write(StructureDefEmitter(child_val).emit())
            elif isinstance(child_val, enum.Enum): write(enum.EnumDefEmitter(child_val).emit())
            elif isinstance(child_val, member.Member): write(member.MemberDefEmitter(child_val).emit())
            else: assert False, f"[gd/struct/emit]: node {self.structure.name} has unexpected child of type {child_val.typename} {child_path}"

        write("}; /* Data::Structure " + self.structure.path + " close */") # def close

        return "\n".join(buff)