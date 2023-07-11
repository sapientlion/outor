///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                   // 
//    Outor - the ultimate outfit advisor and temperature converter made for fun.                                    //
//    Copyright (C) 2023  Leo "SapientLion" Markoff                                                                  // 
//                                                                                                                   //   
//    This program is free software: you can redistribute it and/or modify                                           //
//    it under the terms of the GNU General Public License as published by                                           //
//    the Free Software Foundation, either version 3 of the License, or                                              //
//    (at your option) any later version.                                                                            //   
//                                                                                                                   //
//    This program is distributed in the hope that it will be useful,                                                //
//    but WITHOUT ANY WARRANTY; without even the implied warranty of                                                 //
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the                                                  //
//    GNU General Public License for more details.                                                                   //
//                                                                                                                   //   
//    You should have received a copy of the GNU General Public License                                              //
//    along with this program.  If not, see <https://www.gnu.org/licenses/>.                                         //
//                                                                                                                   //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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
			 * @param value		A double literal to convert.
			 * @param unit		Temperature unit to convert given value from.
			 * @return double	Temperature in degrees Celsius.
			 */
			static double toCelsius(double value, TempUnit unit);
            /**
             * @brief 			Convert given value to degrees Celsius.
             *
             * @param value		A value to convert.
             * @param unit		Temperature unit to convert given value from.
             * @return double	Temperature in degrees Celsius.
             */
            static double toCelsius(outor_cchar value, TempUnit unit);
			/**
			 * @brief
			 *
			 * @param value		A double literal to convert.
			 * @param unit		Temperature unit to convert given value from.
			 * @return double	Temperature in degrees Fahrenheit.
			 */
			static double toFahrenheit(double value, TempUnit unit);
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
