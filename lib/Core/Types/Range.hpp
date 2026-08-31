#pragma once

#include <span>
#include <ranges>

/* Range */
template <typename T, typename Fn>
using range = std::ranges::transform_view<std::span<T>, Fn>;

template <typename T, size_t N, typename Fn>
using owning_range = std::ranges::transform_view<std::ranges::owning_view<std::array<T, N>>, Fn>;