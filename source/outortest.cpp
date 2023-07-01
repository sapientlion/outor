#include "../include/outortest.hpp"
#include "../include/outor.hpp"

void Outor::OutorTester::testNumberConversion()
{
    outor_cchar value = "-11";
	TemperatureConverter converter = TemperatureConverter();

    //
    // Negative decimal number.
    //
    double x = -11;
    double y = converter.convert(value);
    bool result = assertEquals(x, y);

    //
    // Positive decimal number.
    //
    value = "11";
    x = 11;
    y = converter.convert(value);
    result = assertEquals(x, y);

    //
    // Negative real number.
    //
    value = "-11.123";
    x = -11.123;
    y = converter.convert(value);
    result = assertEquals(x, y);

    //
    // Positive real number.
    //
    value = "11.123";
    x = 11.123;
    y = converter.convert(value);
    result = assertEquals(x, y);
};
