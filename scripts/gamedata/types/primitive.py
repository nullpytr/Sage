from .member import Member

class Primitive(Member): 
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

class MemberPointer(Member):
    pass # stored as T* instead of T

class String(MemberPointer):
    pass

class String32(String):
    typename = "string32"

class String64(String):
    typename = "string64"

class WString16(String):
    typename = "wstring16"

class Vector(MemberPointer):# FIXME
    pass

class Vector2(Vector):
    typename = "vec2f"

class Vector3(Vector):
    typename = "vec3f"