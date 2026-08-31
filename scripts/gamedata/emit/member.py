from pathlib import Path

from .. import types

Member = types.Member

class MemberEmitter():
    @staticmethod
    def emit(member: Member, delim: str = " ", header_fp: Path | str | None = None) -> str:
        buffer: list[str] = []
        write = buffer.append

        if header_fp:
            write("#pragma once")
            write("#include <sage>")
            write("")

        return_type = member.typename

        if isinstance(member, types.Array) and not member.element_t.has_trait(Member.Trait.Transparent):
            return_type = return_type.replace("span<", "adaptive_range<") # lazy layout adapter

        if member.has_trait(Member.Trait.Pointer): return_type += "*"
        elif member.has_trait(Member.Trait.Reference): return_type += "&"

        write(f"struct {member.name} : Tag::{member.basename}" " {") # def open
        write(f"using type = {return_type};")
        write("};") # def close

        string = delim.join(buffer)
        if header_fp: Path(header_fp).write_text(string)

        return string