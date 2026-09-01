from .member import Member
from .primitive import *

class Array[T: Member](Member, Member.Trait.Pointer, Member.Trait.Opaque):
    typename: str = "span<{t}>"
    element_t: type[Member]

    def __class_getitem__(cls, t: type[T]):
        return type(
            f"Array[{t.typename}]", 
            (cls,), 
            {"typename": f"{cls.typename.format(t=t.typename)}", "element_t": t}
        )

BoolArray = Array[Bool]
IntArray = Array[Int]
UIntArray = Array[UInt]
UInt64Array = Array[UInt64]
FloatArray = Array[Float]
String32Array = Array[String32] # unused
String64Array = Array[String64]
WString16Array = Array[WString16]
Vector2Array = Array[Vector2]
Vector3Array = Array[Vector3]
ByteArray = Array[Byte]