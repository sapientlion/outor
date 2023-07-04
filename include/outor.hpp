#ifndef OUTOR_HPP
#define OUTOR_HPP

#include "global.hpp"
#include "interfaces/ioutor.hpp"
#include "tempcon.hpp"

namespace Outor
{
    class Outor : public IOutor
    {
        private:
            int m_temperature = 0;
            TemperatureConverter m_tempConverter;

            enum class SuggestionFlag
            {
                SF_UNKNOWN, // The suggestion is unknown.
                SF_WARM,    // Warm clothes.
                SF_SOSO,    // Something in between; neighter warm or light clothes.
                SF_LIGHT    // Light clothes.
            };

        public:
            /**
             * @brief Construct a new Outor object.
             *
             */
            Outor();
            /**
             * @brief Construct a new Outor object.
             *
             * @param temperature Temperature value to process.
             */
            Outor(outor_cchar temperature);
            /**
             * @brief Destroy the Outor object.
             *
             */
            ~Outor();

            SuggestionFlag suggest(outor_cchar temperature);
    };
} // namespace Outor

#endif
