#include "../include/outortest.hpp"
#include "../include/outor.hpp"

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
    result = assertEquals(x, y);

    //
    // Positive decimal number.
    //
    value = "11";
    x = 11;
    y = Converter::convert(value);
    result = assertEquals(x, y);

    //
    // Long decimal number. Note: everything works fine, but the number gets optimized to a shorter version by the
    // compiler. Don't expect a "full" number on output.
    //
    value = "12345678900987654321";
    x = 12345678900987654321;
    y = Converter::convert(value);
    result = assertEquals(x, y);

    //
    // Zero as the number.
    //
    value = "0";
    x = 0;
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

    //
    // Long real number.
    //
    value = "3.1415926535897932384626433";
    x = 3.1415926535897932384626433;
    y = Converter::convert(value);
    result = assertEquals(x, y);
};
