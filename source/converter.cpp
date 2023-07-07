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
