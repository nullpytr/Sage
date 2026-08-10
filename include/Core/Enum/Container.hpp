#pragma once

namespace Enum
{
    template <typename E>
    struct Container : E /* parent struct used to inject enum values into this container's scope -- for ease of access */
    {
        using enum_type = E::enum_type; /* parent struct also provides access to the actual enum type */
    };
}
