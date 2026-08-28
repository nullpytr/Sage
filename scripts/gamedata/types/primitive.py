from .member import *

class Primitive(Member, Member.Trait.Reference): 
    pass

class Bool(Primitive):
    typename = "bool"

class Int(Primitive):
    typename = "s32"

class UInt(Primitive):
    typename = "u32"

class UInt64(Primitive):
    typename = "u64"

class Float(Primitive):
    typename = "float"

class Byte(Primitive):
    typename = "byte"

class String(Member, Member.Trait.Pointer):
    pass

class String32(String):
    typename = "string32"

class String64(String):
    typename = "string64"

class WString16(String):
    typename = "wstring16"

class Vector(Member, Member.Trait.Transparent, Member.Trait.Pointer):
    pass

class Vector2(Vector):
    typename = "vec2f"

class Vector3(Vector):
    typename = "vec3f"