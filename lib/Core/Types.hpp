#pragma once

#include <concepts>
#include <string_view>
#include <span>

#include "Core/Types/Primitive.hpp"
#include "Core/Types/Vec.hpp"
#include "Core/Types/String.hpp"
#include "Core/Types/Enum.hpp"
#include "Core/Types/Range.hpp"

/* STL types */

using std::span;

using std::string_view;
using wstring_view = std::u16string_view;
