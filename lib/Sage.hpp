#pragma once

#include "Core.hpp"
#include "Sav.hpp"
#include "GameData.hpp"

/* User-facing value types, can be used annotate function Sav::get<> return values
 * (ex. in function parameters). See Examples/Sample.cpp
 * These may be slightly different from the template aliases in Data::
 */
template <typename M>
using Member = std::remove_cvref_t<Data::Member<M>>; // v0.9+ strips qualifiers
                                                     // allows qualifiers to be added
                                                     // at call site

template <typename E>
using Enum = Member<E>;

using Data::Map;
using Data::Structure;