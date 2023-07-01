#ifndef GLOBAL_HPP
#define GLOBAL_HPP

#include <iostream>
#include <ncurses.h>

typedef const char *outor_cchar; // A shortcut for character strings.

namespace Outor
{
    /**
     * @brief Outfit type to use for given weather conditions.
     *
     */
    enum class SuggestionFlag
    {
        SF_UNKNOWN, // The suggestion is unknown.
        SF_WARM,    // Warm clothes.
        SF_SOSO,    // Something in between; neighter warm or light clothes.
        SF_LIGHT    // Light clothes.
    };
} // namespace Outor

#endif
