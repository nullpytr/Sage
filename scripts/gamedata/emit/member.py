from .. import types

Member = types.Member

class MemberEmitter():
    @staticmethod
    def emit(member: Member, delim: str = " ") -> str:
        buffer: list[str] = []
        write = buffer.append

        return_type = member.typename

        # TODO: bake this into python's type system instead of forcing it here
        if isinstance(member, (types.Array, types.String)):
            if return_type.startswith(("span<string", "span<wstring")): # FIXME
                return_type = return_type.replace("span<", "span<layout<") + ">"

        if member.has_trait(Member.Trait.Pointer): return_type += "*"
        elif not member.has_trait(Member.Trait.View): return_type += "&" # non-view members are returned by ref

        write(f"struct {member.name} : {member.basename}" " {") # def open
        write(f"using type = {return_type};")
        write("};") # def close

        return delim.join(buffer)