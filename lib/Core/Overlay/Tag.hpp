#pragma once

/* GameData Tags
 * These types are used in Sage's GameData model,
 * for constraining template substitution
 * in Sage's Sav::get<[S|M]> API */
namespace Tag {
    struct Type {};

    struct Structure : Type {};
    struct Member : Type {};
    struct Enum : Member {};
}
