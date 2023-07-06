#include "../include/outortest.hpp"
#include "../include/outor.hpp"

void Outor::OutorTester::testNumberConversion()
{
    outor_cchar value = "-11";

    //
    // Negative decimal number.
    //
    double x = -11;
    double y = Converter::convert(value);
    bool result = assertEquals(x, y);

    //
    // Positive decimal number.
    //
    value = "11";
    x = 11;
    y = Converter::convert(value);
    result = assertEquals(x, y);

    //
    // Negative real number.
    //
    value = "-11.123";
    x = -11.123;
    y = Converter::convert(value);
    result = assertEquals(x, y);

    //
    // Positive real number.
    //
    value = "11.123";
    x = 11.123;
    y = Converter::convert(value);
    result = assertEquals(x, y);
};
