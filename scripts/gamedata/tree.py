from dataclasses import dataclass
from typing import TextIO
import re as regexp

from .types import *
from .emit.structure import StructureEmitter

Tree = Structure
TreeEmitter = StructureEmitter

def make_tree(fh_data_in: TextIO, tree_out: Tree):
    for raw_data in fh_data_in:
        raw_data = raw_data.strip()
        if not raw_data or raw_data.startswith("#"): continue

        data = [v.strip() for v in raw_data.split(";", 2)]
        if len(data) != 3:
            raise AssertionError(f"[gd/tree/make_tree] invalid data record found: {raw_data}")

        if data[0] == "EnumValues": parse_enum_value_record(tree_out, data[1], data[2])
        else: parse_data_record(tree_out, *data)

def parse_enum_value_record(
        tree_root: Tree,
        enum_member_hashtexts_comma_sep_string: str, # like: hashtext1,hashtext_pattern*,hashtext3
        enum_values_string: str
    ) -> None:
    for enum_member_hashtext in enum_member_hashtexts_comma_sep_string.split(","):
        print(enum_member_hashtext)
        parse_data_record(
            tree_root,
            None, #type:ignore EnumValues; records have no hash hexadecimal, uses none on purpose to crash if accessed
            "EnumValues;" + enum_values_string, # hack: values encoded with typename
            enum_member_hashtext
        )

def parse_data_record(
        tree_root: Tree,
        hash_hexadecimal: str,
        raw_typename: str,
        hash_text_string: str
    ) -> None:
    curr_node: Structure = tree_root

    identifier_list = get_sanitized_identifier_list(hash_text_string)

    for curr_id in identifier_list[:-1]: # ensure all parent structs exist
        if curr_id not in curr_node.children:
            curr_node.children[curr_id] = Structure(
                name=curr_id,
                path=f"{curr_node.path}::{curr_id}",
                children={}
            )

        next_node = curr_node.children[curr_id]
        assert isinstance(next_node, Structure)
        curr_node = next_node

    print(identifier_list)
    id = identifier_list[-1] # create member at leaf node

    if raw_typename.startswith("EnumValues;"):
        values = tuple(raw_typename.removeprefix("EnumValues;").split(",")) # hack: get values from typename (see L32)
        incomplete_t = curr_node.children.get(id)
        if isinstance(incomplete_t, Enum): # direct match: no need for search
            curr_node.children[id] = resolve_incomplete_enum_member(values, incomplete_t)
            return 
        
        # search current scope recursively
        return resolve_incomplete_enum_members_in_scope(hash_text_string, values, curr_node)

    curr_node.children[id] = \
        resolve_member_type(raw_typename)(
            name=id,
            path=f"{curr_node.path}::{id}",
            hash_text_string=hash_text_string,
            hash_hexadecimal=hash_hexadecimal
        )

def resolve_incomplete_enum_member(values: tuple[str, ...], incomplete_t: Enum) -> Enum:
    complete_t = EnumArray[incomplete_t.name] if isinstance(incomplete_t, EnumArray) else Enum[incomplete_t.name]
    return complete_t(
        name=incomplete_t.name,
        path=incomplete_t.path,
        hash_hexadecimal=incomplete_t.hash_hexadecimal,
        hash_text_string=incomplete_t.hash_text_string,
        values=values
    )

def resolve_incomplete_enum_members_in_scope(pattern: str, values: tuple[str, ...], scope: Tree) -> None: 
    for t in scope.children.values():
        if isinstance(t, Structure): resolve_incomplete_enum_members_in_scope(pattern, values, t) # recursive search
        if not isinstance(t, Enum): continue

        if regexp.match(pattern, t.hash_text_string): # found match?
            scope.children[t.name] = resolve_incomplete_enum_member(values, t)

def get_identifier_list_from_regexp_pattern(s: str) -> list[str]:
    # get identifier list upto just before wilcard* in regexp pattern
    # ex. DungeonState.Dungeon* -> [DungeonState]
    # ex. PictureBookData.*.State -> [PictureBookData]
    # ex. *Stand(...) -> [_]
    _pattern_list = get_identifier_list_from_hashtext(s)
    id_list: list[str] = []
    for id in _pattern_list:
        if "*" in id: break
        if not id: id = "_"
        id_list.append(id)

    return id_list

def get_identifier_list_from_hashtext(s: str) -> list[str]:
    return s.split(".")

def get_sanitized_identifier_list(s: str) -> list[str]:
    id_list = (
        get_identifier_list_from_regexp_pattern(s)
        if "*" in s else
        get_identifier_list_from_hashtext(s)
    )
    return [*map(sanitize_identifier, id_list)]

def sanitize_identifier(id: str) -> str:
    if id[0].isdigit(): id = f"_{id}" # leading digit not allowed
    id = id.replace("-", "_") # - not allowed anywhere
    assert id.isidentifier(), f"invalid id found: {id}" # sanity check
    return id
