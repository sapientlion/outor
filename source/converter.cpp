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

/*bool Outor::Converter::isReal(outor_cchar value)
{
    if(value == nullptr)
    {
        return false;
    }

    bool isDecimal = false;
    int length = getLength(value);

    for(int cursorPos = 0; cursorPos < length; cursorPos++)
    {
        switch(value[cursorPos])
        {
            case '.':
            case '-':
            case 0 ... 9:
                {
                    isDecimal = true;

                    break;
                }
            default:
                {
                    return false;
                }
        }
    }

    return true;
}*/

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

    /*double result = 0.0;

    if(value == nullptr)
    {
        return result;
    }

    //
    // Given value must be a real number.
    //
    if(isReal(value))
    {
        return result;
    }

    bool dFlag = false;            // Given value is either an integer or a double.
    bool nFlag = false;            // Given value is either a negative number or a positive one.
    int length = getLength(value); // Get total length of a given character string for a future referencing.
    int rNumberLength = 0;         // Total length of the rightmost number.
    int floatPointPos = 0;         // Position of a floating point.

    //
    // Check whether value is a negative real number.
    //
    if(value[0] == '-')
    {
        nFlag = true;
    }

    //
    // Check whether value contains a floating point.
    //
    for(int cursorPos = 0; cursorPos < length; cursorPos++)
    {
        if(value[cursorPos] == '.')
        {
            dFlag = true;
            floatPointPos = cursorPos;
            rNumberLength = rNumberLength + (length - floatPointPos);

            break;
        }
    }

    if(!dFlag)
    {
        result += toDecimal(value);
        //result += toDecimal(length, value);
    }
    else
    {
        result += toReal(value);
        //result += toReal(length, rNumberLength, value, floatPointPos);
    }

    //
    // Don't forget to switch this fucking number, so it's negative.
    //
    if(nFlag)
    {
        return result *= (-1);
    }

    return result;*/
};
