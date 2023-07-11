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

#include "../include/outortest.hpp"
#include "../include/outor.hpp"
#include "../include/tempcon.hpp"
#include "../include/tester.hpp"

void Outor::OutorTester::testNumberConversion()
{
    bool result;
    double x;
    double y;
    outor_cchar value;

    //
    // Negative decimal number.
    //
    value = "-11";
    x = -11;
    y = Converter::convert(value);
    result = Tester::assertEquals(x, y);

    //
    // Positive decimal number.
    //
    value = "11";
    x = 11;
    y = Converter::convert(value);
    result = Tester::assertEquals(x, y);

    //
    // Long decimal number. Note: everything works fine, but the number gets optimized to a shorter version by the
    // compiler. Don't expect a "full" number on output.
    //
    value = "12345678900987654321";
    x = 12345678900987654321;
    y = Converter::convert(value);
    result = Tester::assertEquals(x, y);

    //
    // Zero as the number.
    //
    value = "0";
    x = 0;
    y = Converter::convert(value);
    result = Tester::assertEquals(x, y);

    //
    // Negative real number.
    //
    value = "-11.123";
    x = -11.123;
    y = Converter::convert(value);
    result = Tester::assertEquals(x, y);

    //
    // Positive real number.
    //
    value = "11.123";
    x = 11.123;
    y = Converter::convert(value);
    result = Tester::assertEquals(x, y);

    //
    // Long real number.
    //
    value = "3.1415926535897932384626433";
    x = 3.1415926535897932384626433;
    y = Converter::convert(value);
    result = Tester::assertEquals(x, y);
}

void Outor::OutorTester::testTemperatureConversion()
{
    bool result;
    double x;
    double y;
	double valueFloat;
    outor_cchar valueString;

    //
    // Celsius to Fahrenheit (using real numbers).
    //
    valueFloat = 11;
    x = 51.8;
    y = TempConverter::toFahrenheit(valueString, TempConverter::TempUnit::TM_CELSIUS);
    result = Tester::assertEquals(x, y);

    //
    // Fahrenheit to Celsius (using real numbers).
    //
    valueFloat = 51.8;
    x = 11;
    y = TempConverter::toCelsius(valueString, TempConverter::TempUnit::TM_FAHRENHEIT);
    result = Tester::assertEquals(x, y);

    //
    // Celsius to Fahrenheit (using character strings).
    //
    valueString = "11";
    x = 51.8;
    y = TempConverter::toFahrenheit(valueString, TempConverter::TempUnit::TM_CELSIUS);
    result = Tester::assertEquals(x, y);

    //
    // Fahrenheit to Celsius (using character strings).
    //
    valueString = "51.8";
    x = 11;
    y = TempConverter::toCelsius(valueString, TempConverter::TempUnit::TM_FAHRENHEIT);
    result = Tester::assertEquals(x, y);
}
