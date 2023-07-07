#ifndef TEMPCON_HPP
#define TEMPCON_HPP

#include "converter.hpp"
#include "global.hpp"

namespace Outor
{
    class TemperatureConverter : public Converter
    {
        public:
            enum class TemperatureUnit
            {
                TM_CELSIUS,
                TM_FAHRENHEIT
            };

			/**
			 * @brief 					Construct a new Temperature Converter object
			 *
			 */
            TemperatureConverter();
			/**
			 * @brief 					Destroy the Temperature Converter object
			 *
			 */
            ~TemperatureConverter();

            /**
             * @brief 					Convert given temperature to degrees Celsius.
             *
             * @param value				Temperature to process.
             * @param tempMeasurement	Temperature unit to use for conversion.
             * @return double			Result.
             */
            static double celsius(outor_cchar value, TemperatureUnit tempMeasurement = TemperatureUnit::TM_FAHRENHEIT);
            /**
             * @brief 					Convert given temperature to degrees Fahrenheit.
             *
             * @param value				Temperature to process.
             * @param tempMeasurement	Temperature unit to use for conversion.
             * @return double			Result.
             */
            static double fahrenheit(outor_cchar value, TemperatureUnit tempMeasurement = TemperatureUnit::TM_CELSIUS);
    };
} // namespace Outor

#endif
