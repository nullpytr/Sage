from .member import Member

class PrimitiveType(Member): pass

class Bool(PrimitiveType):
    typename = "bool"

class Int(PrimitiveType):
    typename = "s32"

class UInt(PrimitiveType):
    typename = "u32"

class UInt64(PrimitiveType):
    typename = "u64"

class Float(PrimitiveType):
    typename = "float"

class String32(PrimitiveType):
    typename = "string32"

class String64(PrimitiveType):
    typename = "string64"

class WString16(PrimitiveType):
    typename = "wstring16"

class Vector2(PrimitiveType):
    typename = "vec2f"

class Vector3(PrimitiveType):
    typename = "vec3f"

class Byte(PrimitiveType):
    typename = "byte"