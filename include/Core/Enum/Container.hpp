#pragma once

namespace Enum
{
    template <typename E>
    struct Container : E /* injects enum values into container's scope -- for ease of access */
    {
        using enum_type = E::enum_type;
    };
}
