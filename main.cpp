#include "include/outor.hpp"
#include "include/outortest.hpp"
#include "include/outortui.hpp"

int main(int argc, char **argv)
{
#ifdef OUTOR_UNIT_TESTING

    Outor::OutorTester tester = Outor::OutorTester();

    tester.testNumberConversion();

#else

    Outor::OutorTUI outorTUI = Outor::OutorTUI();

    outorTUI.run();

#endif

    return 0;
}
