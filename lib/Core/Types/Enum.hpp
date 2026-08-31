#pragma once

template <typename E, typename V = E::values_t>
struct enum_t /* enum is a reserved keyword */ : V // V brings all the enum values into scope of this blob type
{
    using typename V::underlying_enum_t;

    underlying_enum_t const& get() const { return value; } // getters
    underlying_enum_t& get() { return value; }

    underlying_enum_t const& operator*() const { return get(); }
    underlying_enum_t& operator*()             { return get(); }

    operator underlying_enum_t() const { return get(); } // implicit conversion

    enum_t& operator=(underlying_enum_t const& v) { value = v; return *this; } // assignment

    bool operator==(underlying_enum_t const& v) const { return value == v; } // comparison

    /*--*/
    underlying_enum_t value;
};