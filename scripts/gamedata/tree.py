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
        incomplete_t = curr_node.children.get(path)
        assert isinstance(incomplete_t, Member), \
            f"[gd/tree/resolve_incomplete_enum_member]: invalid EnumValues member type: {incomplete_t} found for {path}"
        curr_node.children[path] = resolve_incomplete_enum_member(incomplete_t, raw_typename)
        return

    curr_node.children[path] = \
        resolve_member_type(raw_typename)(
            name=id,
            path=path,
            hash_text_string=hash_text_string,
            hash_hexadecimal=hash_hexadecimal
        )

def resolve_incomplete_enum_member(incomplete_t: Member, enum_kind: str) -> Enum:
    complete_t = EnumArray[incomplete_t.name] if enum_kind == "EnumArray" else EnumScalar[incomplete_t.name]
    return complete_t(
        name=incomplete_t.name,
        path=incomplete_t.path,
        hash_text_string=incomplete_t.hash_text_string,
        keys=tuple(incomplete_t.hash_hexadecimal.split(",")) # HACK: EnumValues members place keys csv in the hash_hexdacimal field
    )