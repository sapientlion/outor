#ifndef GLOBAL_HPP
#define GLOBAL_HPP

#include <iostream>
#include <ncurses.h>

#define OUTOR_OPTIONS_NUMBER 3
#define OUTOR_VERSION_MAJOR	"0"
#define OUTOR_VERSION_MINOR "1"
#define OUTOR_VERSION_PATCH "0"
#define OUTOR_VERSION OUTOR_VERSION_MAJOR "." OUTOR_VERSION_MINOR "." OUTOR_VERSION_PATCH

typedef const char *outor_cchar; // A shortcut for character strings.

namespace Outor
{
    /**
     * @brief 		Outfit type to use during given weather conditions.
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
