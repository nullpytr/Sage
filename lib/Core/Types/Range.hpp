#pragma once

#include <span>
#include <array>

#include <ranges>
namespace ranges = std::ranges;

/* Range */
template <typename T, typename Fn>
using range = ranges::transform_view<std::span<T>, Fn>;

template <typename T, size_t N, typename Fn>
using owning_range = ranges::transform_view<ranges::owning_view<std::array<T, N>>, Fn>;

/* mapped_range dereferences pointer in a pointer array (map<T, N>) lazily on access */
inline auto deref = [](auto* p) -> auto& { return *p; };
template <typename T, size_t N> using mapped_range = owning_range<T*, N, decltype(deref)>;