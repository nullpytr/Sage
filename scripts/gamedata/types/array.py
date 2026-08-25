from .member import MemberView
from .primitive import *

class Array[T: Member](MemberView, MemberPointer):
    typename: str = "span<{t}>"

    def __class_getitem__(cls, t: type[T]):
        return type(
            f"Array[{t.typename}]", 
            (cls,), 
            {"typename": f"{cls.typename.format(t=t.typename)}"}
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