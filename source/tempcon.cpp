#include "../include/tempcon.hpp"

Outor::TemperatureConverter::TemperatureConverter()
{
    return;
}

Outor::TemperatureConverter::~TemperatureConverter()
{
    return;
}

double Outor::TemperatureConverter::celsius(outor_cchar value, TemperatureUnit tempMeasurement)
{
    double temperature = convert(value);

    switch(tempMeasurement)
    {
        case TemperatureUnit::TM_FAHRENHEIT:
            {
                return temperature = fahrenheit(value, TemperatureUnit::TM_CELSIUS);
            }
        default:
            {
                return temperature;
            }
    }
}

double Outor::TemperatureConverter::fahrenheit(outor_cchar value, TemperatureUnit tempMeasurement)
{
    double temperature = convert(value);

    switch(tempMeasurement)
    {
        case TemperatureUnit::TM_CELSIUS:
            {
                return temperature = celsius(value, TemperatureUnit::TM_FAHRENHEIT);
            }
        default:
            {
                return temperature;
            }
    }
}
