#define BOOST_STATIC_STRING_STANDALONE

#ifndef BOOST_STATIC_STRING_HPP

#ifndef BOOST_STATIC_STRING_CONFIG_HPP
#include "boost/static_string/config.hpp"
#endif

#include "boost/static_string/mutable_string_view.hpp"
#endif

template<std::size_t N, typename CharT = char, typename Traits = std::char_traits<CharT>>
using basic_string = boost::static_strings::basic_static_string<N, CharT, Traits>;

template <size_t N>
using string = basic_string<N - 1, char>;

template <size_t N>
using u16string = basic_string<N - 1, char16_t>;

#include <format>
template <size_t N>
struct std::formatter<::basic_string<N, char>> : std::formatter<std::string_view>
{
    auto format(const ::basic_string<N, char>& s, std::format_context& ctx) const {
        return std::formatter<std::string_view>::format(std::string_view{ s }, ctx);
    }
};