from dataclasses import dataclass
from typing import TextIO

from .types import *

Tree = Structure

def parse_csv(fh_data_in: TextIO, tree_out: Tree):
    for raw_data in fh_data_in:
        raw_data = raw_data.strip()
        if not raw_data or raw_data.startswith("#"): continue

        data = [v.strip() for v in raw_data.split(";", 2)]
        if len(data) != 3:
            raise AssertionError(f"[gd/tree/make_tree] invalid data record found: {raw_data}")

        if data[0] == "EnumValues":
            parse_enum_value_record(tree_out, data[1], data[2]) # Used to complete Enum members later
        else:
            parse_data_record(tree_out, *data)

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
    for curr_id in identifiers[:-1]: # Ensure all parent structs exist
        next_path = f"{curr_node.path}::{curr_id}"
        if next_path not in curr_node.children:
            curr_node.children[next_path] = Structure(
                name=curr_id,
                path=next_path,
                children={}
            )

        next_node = curr_node.children[next_path]
        assert isinstance(next_node, Structure)
        curr_node = next_node

    id = identifiers[-1] # Create member at leaf node
    path = f"{curr_node.path}::{id}"

    if raw_typename.startswith("Enum"):
        enum_values = curr_node.children.get(path)
        assert isinstance(enum_values, Member), \
            f"[gd/tree/resolve_incomplete_enum_member]: invalid EnumValues member type: {enum_values} found for {path}"
        curr_node.children[path] = resolve_incomplete_enum_member(enum_values, raw_typename)
        return

    curr_node.children[path] = \
        resolve_member_type(raw_typename)(
            name=id,
            path=path,
            hash_text_string=hash_text_string,
            hash_hexadecimal=hash_hexadecimal
        )

def resolve_incomplete_enum_member(enum_values: Member, enum_kind: str) -> Enum:
    enum_name = enum_values.name
    complete_t = EnumArray[enum_name] if enum_kind == "EnumArray" else EnumScalar[enum_name]
    return complete_t(
        name=enum_name,
        path=enum_values.path,
        hash_text_string=enum_values.hash_text_string,
        keys=tuple(enum_values.hash_hexadecimal.split(",")) # HACK: EnumValues members place keys csv in the hash_hexdacimal field
    )