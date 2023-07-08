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
