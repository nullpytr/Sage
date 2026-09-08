#pragma once

template <typename E, typename V = E::values_t>
struct enum_t /* enum is a reserved keyword */ : V // V brings all the enum values into scope of this blob type
{
    using typename V::underlying_enum_t;

    auto& get(this auto& self) { return self.value; } // getters
    auto& operator*(this auto& self) { return self.get(); }

    operator underlying_enum_t() const { return get(); } // implicit conversion

    enum_t& operator=(underlying_enum_t const& v) { value = v; return *this; } // assignment

    bool operator==(underlying_enum_t const& v) const { return value == v; } // comparison

    /*--*/
    underlying_enum_t value;
};