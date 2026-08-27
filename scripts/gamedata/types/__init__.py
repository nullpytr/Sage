from .base import *
from .structure import *
from .member import *
from .primitive import *
from .array import *
from .enum import *
from .hash import *

def resolve_member_type(raw_typename: str) -> type[Member]:
    assert raw_typename in MEMBER_TYPES, \
        f"[gd/types/member_type]: could not resolve concrete type for {raw_typename}"
    
    return MEMBER_TYPES[raw_typename]

MEMBER_TYPES = { # All member sub-types
    k: v for k, v 
    in locals().items() 
    if isinstance(v, type) 
    and issubclass(v, Member)
}