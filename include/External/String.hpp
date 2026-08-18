//
// Copyright (c) 2020 Krystian Stasiowski (sdkrystian at gmail dot com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/boostorg/static_string
//
#define BOOST_STATIC_STRING_STANDALONE

#ifndef BOOST_STATIC_STRING_HPP

#ifndef BOOST_STATIC_STRING_CONFIG_HPP
#include "boost/static_string/config.hpp"
#endif

#define BOOST_STATIC_STRING_HPP
#include "boost/static_string/static_string.hpp"
#endif

template <size_t N>
using string = boost::static_string<N>;

template <size_t N>
using u16string = boost::static_u16string<N>;

template <std::size_t N>
struct std::formatter<string<N>> : std::formatter<std::string> {
    auto format(const ::string<N>& a, std::format_context& ctx) const {
        return std::formatter<std::string>::format(
            std::string{ a.begin(), a.end() }, ctx);
    }
};