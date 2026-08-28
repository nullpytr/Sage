from pathlib import Path

from . import member, enum
from .. import types

Structure = types.Structure

class StructureEmitter():
    @staticmethod
    def emit(struct: Structure, delim: str = "\n", header_fp: Path | str | None = None, include_dir: Path | str | None = None) -> str:
        depth = 0
        buffer: list[str] = []
        write = lambda s: buffer.append("\t" * depth + s)

        is_fs_emit = header_fp or include_dir # are we writing an actual file?
        if is_fs_emit:
            write("#pragma once")
            write("#include <sage>")
            write("")

        write(f"struct {struct.path} : {struct.basename}" " {") # tag open

        depth += 1
        for child in struct.children.values(): # child tags
            print(f"[gd/struct/emit/def]: processing {child.path}")
            if isinstance(child, Structure): write(f"struct {child.name};") # forward ref (declared out of line -- gd v5.x)
            elif isinstance(child, enum.Enum): write(enum.EnumEmitter.emit(child))
            elif isinstance(child, member.Member): write(member.MemberEmitter.emit(child))
            else: assert False, f"[gd/struct/emit]: node {struct.name} has unexpected child of type {child.typename} {child.path}"
        depth -= 1

        write("};" f"/* Tag::Structure {struct.path} close */{delim}") # tag close

        _old_len = len(buffer)
        for child in struct.children.values(): # out of line child struct tags (gd v5.x)
            if not isinstance(child, Structure): continue
            substruct = StructureEmitter.emit(child, delim, include_dir=include_dir)
            if include_dir: write(f"#include \"{struct.name}/{child.name}.hpp\"")
            else: write(substruct)
        if _old_len != len(buffer): write("")

        write(f"template <> struct Data::Structure<{struct.path}> : {struct.path}" " {") # data open

        depth += 1
        for child in struct.children.values(): # member decls
            if isinstance(child, Structure): write(f"Structure<{child.name}> {child.name};")
            elif isinstance(child, enum.Enum): write(f"Data::Enum<{child.name}> {child.name};")
            elif isinstance(child, member.Member): write(f"Data::Member<{child.name}> {child.name};")
            else: assert False, f"[gd/struct/emit]: node {struct.name} has unexpected child of type ({type(child)}, {child.typename}) {child.path}"

        write("")
        write("explicit Structure(Sav& s) : ") # ctor open

        depth += 1
        for child in struct.children.values(): # member inits
            if isinstance(child, Structure):  write(f"{child.name}" " { s },")
            elif isinstance(child, member.Member): write(f"{child.name}" " { " f"s.get<struct {child.name}>()" " },")
            else: assert False, f"[gd/struct/emit]: node {struct.name} has unexpected child of type ({type(child)}, {child.typename}) {child.path}"
        depth -= 1

        buffer[-1] = buffer[-1].removesuffix(",") # strip last comma
        write("{ }") # ctor close

        depth -= 1
        write("};" f"/* Data::Structure {struct.path} close */{delim}") # data close

        for child in struct.children.values(): # member hashtable defs
            if not isinstance(child, member.Member): continue
            child_hash = f"murmurhash3::hash(\"{child.hash_text_string}\")"
            if child.hash_text_string == "Playtime":
                child_hash = f"0x{child.hash_hexadecimal}" # unknown hash text for playtime field

            write(f"template <> {types.Hash} constexpr Data::Hashtable<{child.path}> = {child_hash};")

        string = delim.join(buffer)
        if include_dir:
            relpath = "./" + struct.path.replace("::", "/").removeprefix("/") + ".hpp"
            header_file = Path(include_dir).absolute() / relpath
            header_file.parent.mkdir(exist_ok=True, parents=True)
            header_file.write_text(string)
        elif header_fp:
            Path(header_fp).write_text(string)

        return string
            