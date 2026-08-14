from . import base, member, enum
from .. import types

Structure = types.Structure

class StructureEmitter(base.GameDataEmitter):
    structure: Structure

    def __init__(self, structure: Structure) -> None:
        self.structure = structure

    def emit(self) -> str:
        buffer: list[str] = []
        write = buffer.append

        write(f"struct {self.structure.path} : {self.structure.basename}" + " {") # tag open

        for child in self.structure.children.values(): # child tags
            print(f"[gd/struct/emit/def]: processing {child.path}")
            if isinstance(child, Structure): write(f"struct {child.name};") # forward ref (declared out of line -- gd v5.x)
            elif isinstance(child, enum.Enum): write(enum.EnumEmitter(child).emit())
            elif isinstance(child, member.Member): write(member.MemberEmitter(child).emit())
            else: assert False, f"[gd/struct/emit]: node {self.structure.name} has unexpected child of type {child.typename} {child.path}"

        write("}; /* Tag::Structure " + self.structure.path + " close */\n") # tag close

        for child in self.structure.children.values(): # out of line child struct tags (gd v5.x)
            if isinstance(child, Structure): write(StructureEmitter(child).emit())

        write(f"template <> struct Data::Structure<{self.structure.path}> : {self.structure.path}" + " {") # data open

        for child in self.structure.children.values(): # member decls
            if isinstance(child, Structure): write(f"Structure<{child.name}> {child.name};")
            elif isinstance(child, member.Member): write(f"{child.name}::value_type {child.name};")
            else: assert False, f"[gd/struct/emit]: node {self.structure.name} has unexpected child of type ({type(child)}, {child.typename}) {child.path}"

        write("Structure(Sav& s) : ") # ctor open

        for child in self.structure.children.values(): # member inits
            if isinstance(child, Structure):  write(f"{child.name}" + " { s },")
            elif isinstance(child, member.Member): write(f"{child.name}" + " { " + f"s.get<struct {child.name}>()" + " },")
            else: assert False, f"[gd/struct/emit]: node {self.structure.name} has unexpected child of type ({type(child)}, {child.typename}) {child.path}"
    

        buffer[-1] = buffer[-1].removesuffix(",") # strip last comma
        write("{ }") # ctor close

        write("}; /* Data::Structure " + self.structure.path + " close */\n") # data close

        for child in self.structure.children.values(): # member hashtable defs
            if not isinstance(child, member.Member): continue
            write(f"template <> hash_t constexpr Data::Hashtable<{child.path}> = murmurhash3::hash(\"{child.hash_text_string}\");")

        return "\n".join(buffer)