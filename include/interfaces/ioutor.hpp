#ifndef IOUTOR_HPP
#define IOUTOR_HPP

#include "../global.hpp"

namespace Outor
{
    class IOutor
    {
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
