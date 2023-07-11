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

#include "../include/tempcon.hpp"

Outor::TempConverter::TempConverter()
{
    return;
}

Outor::TempConverter::~TempConverter()
{
    return;
}

double Outor::TempConverter::toCelsius(double value, TempUnit unit)
{
	switch(unit)
    {
        case TempUnit::TM_FAHRENHEIT:
            {
                return value = (value - 32) * 5 / 9;
            }
        default:
            {
                return value;
            }
    }
}

double Outor::TempConverter::toCelsius(outor_cchar value, TempUnit unit)
{
    double temperature = Converter::convert(value);

    switch(unit)
    {
        case TempUnit::TM_FAHRENHEIT:
            {
                return temperature = (temperature - 32) * 5 / 9;
            }
        default:
            {
                return temperature;
            }
    }
}

double Outor::TempConverter::toFahrenheit(double value, TempUnit unit)
{
    switch(unit)
    {
        case TempUnit::TM_CELSIUS:
            {
                return value = (value * 9 / 5) + 32;
            }
        default:
            {
                return value;
            }
    }
}

double Outor::TempConverter::toFahrenheit(outor_cchar value, TempUnit unit)
{
    double temperature = Converter::convert(value);

    switch(unit)
    {
        case TempUnit::TM_CELSIUS:
            {
                return temperature = (temperature * 9 / 5) + 32;
            }
        default:
            {
                return temperature;
            }
    }
}
