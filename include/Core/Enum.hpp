#pragma once

template <typename V>
struct Enum : V // V (values_t) brings all the enum values into scope of this view type
{
    using typename V::underlying_enum_t;

    underlying_enum_t const& get() const { return value; } // getters
    underlying_enum_t& get() { return value; }

    underlying_enum_t const& operator*() const { return get(); }
    underlying_enum_t& operator*()             { return get(); }

    operator underlying_enum_t() const { return get(); } // implicit conversion

    Enum& operator=(underlying_enum_t const& v) { value = v; return *this; } // assignment

    bool operator==(underlying_enum_t const& v) const { return value == v; } // comparison

    Enum(underlying_enum_t& v) : value(v) {}

    /*--*/
    underlying_enum_t& value;
};