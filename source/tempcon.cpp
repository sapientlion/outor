#include "../include/tempcon.hpp"

Outor::TemperatureConverter::TemperatureConverter()
{
    return;
}

Outor::TemperatureConverter::~TemperatureConverter()
{
    return;
}

double Outor::TemperatureConverter::celsius(outor_cchar value, TempMeasurement tempMeasurement)
{
    double temperature = convert(value);

    switch(tempMeasurement)
    {
        case TempMeasurement::TM_FAHRENHEIT:
            {
                return temperature = fahrenheit(value, TempMeasurement::TM_CELSIUS);
            }
        default:
            {
                return temperature;
            }
    }
}

double Outor::TemperatureConverter::fahrenheit(outor_cchar value, TempMeasurement tempMeasurement)
{
    double temperature = convert(value);

    switch(tempMeasurement)
    {
        case TempMeasurement::TM_CELSIUS:
            {
                return temperature = celsius(value, TempMeasurement::TM_FAHRENHEIT);
            }
        default:
            {
                return temperature;
            }
    }
}
