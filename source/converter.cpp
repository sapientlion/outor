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

#include "../include/converter.hpp"

int Outor::Converter::getLength(outor_cchar value)
{
    int length = 0;

    if(value == nullptr)
    {
        return length;
    }

    while(value[length] != NULL)
    {
        length++;
    }

    return length;
}

bool Outor::Converter::isNegative(char sign)
{
    if(sign == '-')
    {
        return true;
    }

    return false;
}

bool Outor::Converter::isPositive(char sign)
{
    if(sign != '-')
    {
        return true;
    }

    return false;
}

bool Outor::Converter::isReal(outor_cchar value)
{
    if(!isApplicable(value))
    {
        return false;
    }

    int length = getLength(value);

    for(int cursorPosition = 0; cursorPosition < length; cursorPosition++)
    {
        if(value[cursorPosition] == '.')
        {
            return true;
        }
    }

    return false;
}

double Outor::Converter::convert(outor_cchar value)
{
    double number = 0.0;

    if(!isApplicable(value))
    {
        return number;
    }

    bool dFlag = isReal(value);

    if(!dFlag)
    {
        number += toDecimal(value);
    }
    else
    {
        number += toReal(value);
    }

    return number;
};
