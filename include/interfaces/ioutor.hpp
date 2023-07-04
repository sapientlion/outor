#ifndef IOUTOR_HPP
#define IOUTOR_HPP

#include "../global.hpp"

namespace Outor
{
    class IOutor
    {
        public:
            enum class SuggestionFlag
            {
                SF_UNKNOWN, // The suggestion is unknown.
                SF_WARM,    // Warm clothes.
                SF_SOSO,    // Something in between; neither warm or light clothes.
                SF_LIGHT    // Light clothes.
            };

            /**
             * @brief Give advice to user on what to wear during specified weather conditions.
             *
             * @param temperature
             * @return SuggestionFlag
             */
            virtual SuggestionFlag suggest(outor_cchar temperature) = 0;
    };
} // namespace Outor

#endif
