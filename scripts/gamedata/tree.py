from dataclasses import dataclass
from typing import TextIO

from .types import *

type Tree = Structure

def make_tree(data_fh: TextIO) -> Tree:
    """
    Generates a tree of nodes from the given data file.
    """
    tree_root: Tree = Structure(name="GameData", children={})

    for raw_data in data_fh:
        raw_data = raw_data.strip()
        if not raw_data or raw_data.startswith("#"): continue

        data = [v.strip() for v in raw_data.split(";", 2)]
        if len(data) != 3:
            raise AssertionError(f"[gd/tree/make_tree] invalid data record found: {raw_data}")

        if data[0] == "EnumValues":
            parse_enum_value_record(tree_root, data[1], data[2]) # Used to complete Enum members later
        else:
            parse_data_record(tree_root, *data)
        
    return tree_root

def parse_enum_value_record(
        tree_root: Tree,
        enum_value_type_hashtext: str,
        enum_values_string: str
    ) -> None:
    return parse_data_record(
        tree_root, 
        enum_values_string, # HACK: Using the hash_hexdacimal field to hold the keys csv string
        "Member",
        enum_value_type_hashtext
    )

def parse_data_record(
        tree_root: Tree, 
        hash_hexadecimal: str, 
        raw_typename: str, 
        hash_text_string: str
    ) -> None:
    curr_node: Structure = tree_root
    identifiers = hash_text_string.split(".")
    for id in identifiers[:-1]: # Ensure all parent structs exist
        if id not in curr_node.children:
            curr_node.children[id] = Structure(
                name=id,
                children={}
            )

        next_node = curr_node.children[id]
        assert isinstance(next_node, Structure)
        curr_node = next_node

    id = identifiers[-1] # Create member at leaf node
    if raw_typename.startswith("Enum"):
        return resolve_incomplete_enum_member(curr_node, id, raw_typename)

    curr_node.children[id] = \
        resolve_member_type(raw_typename)(
            name=id,
            hash_text_string=hash_text_string,
            hash_hexadecimal=hash_hexadecimal
        )

def resolve_incomplete_enum_member(parent_node: Tree, enum_id: str, enum_kind: str):
    enum_values = parent_node.children.get(f"{enum_id}")
    assert isinstance(enum_values, Member), \
        f"[gd/tree/resolve_incomplete_enum_member]: invalid EnumValues member type: {enum_values} found for {enum_id}"

    complete_t = EnumArray[enum_id] if enum_kind == "EnumArray" else EnumScalar[enum_id]
    value_type = complete_t(
        name=enum_id,
        hash_text_string=enum_values.hash_text_string,
        keys=tuple(enum_values.hash_hexadecimal.split(",")) # HACK: EnumValues members place keys csv in the hash_hexdacimal field
    )

    parent_node.children[enum_id] = value_type