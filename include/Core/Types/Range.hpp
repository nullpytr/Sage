#pragma once

#include <span>
#include <ranges>

/* Range */
template <typename T, typename Fn>
using range = std::ranges::transform_view<std::span<T>, Fn>;