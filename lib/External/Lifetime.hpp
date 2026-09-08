#pragma once

#include <memory>
#include <cstring>
#include <new>
#include <concepts>

/* Explicit lifetime management
 * https://en.cppreference.com/cpp/memory/start_lifetime_as
 * Unsupported on mainline LLVM Clang, so we use a fallback:
 * https://stackoverflow.com/questions/76445860/implementation-of-stdstart-lifetime-as
 */

template <typename T>
requires std::is_trivially_copyable_v<T>
    #ifdef __cpp_lib_is_implicit_lifetime
    && std::is_implicit_lifetime_v<T>
    #endif
[[nodiscard]] T* start_lifetime_as(void* p) noexcept {
    #ifdef __cpp_lib_start_lifetime_as
    return std::start_lifetime_as<T>(p);
    #else
    return std::launder(static_cast<T*>(std::memmove(p, p, sizeof(T))));
    #endif
}