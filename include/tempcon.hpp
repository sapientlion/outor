#ifndef TEMPCON_HPP
#define TEMPCON_HPP

#include "converter.hpp"
#include "global.hpp"

namespace Outor
{
    class TempConverter
    {
        public:
            enum class TempUnit
            {
                TM_CELSIUS,
                TM_FAHRENHEIT
            };

            /**
             * @brief 			Construct a new Temperature Converter object
             *
             */
            TempConverter();
            /**
             * @brief 			Destroy the Temperature Converter object
             *
             */
            ~TempConverter();

            /**
             * @brief 			Convert given value to degrees Celsius.
             *
             * @param value		A value to convert.
             * @param unit		Temperature unit to convert given value from.
             * @return double	Temperature in degrees Celsius.
             */
            static double toCelsius(outor_cchar value, TempUnit unit);
            /**
             * @brief			Convert given value to degrees Fahrenheit.
             *
             * @param value		A value to convert.
             * @param unit		Temperature unit to convert given value from.
             * @return double   Temperature in degrees Fahrenheit.
             */
            static double toFahrenheit(outor_cchar value, TempUnit unit);
    };
} // namespace Outor

#endif
