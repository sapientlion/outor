#include "include/outor.hpp"
#include "include/outortest.hpp"
#include "include/outortui.hpp"

int main(int argc, char **argv)
{
#if OUTOR_UNIT_TESTING > 0
    Outor::OutorTester tester = Outor::OutorTester();

    tester.testNumberConversion();
#else

    bool eFlag = true;
    Outor::OutorTUI outorTUI = Outor::OutorTUI();

    while(eFlag)
    {
        outorTUI.get();
        int value = outorTUI.getMenu().outorGetch();
        outorTUI.getMenu().outorClear();

        switch(value)
        {
            case 'a':
                {
                    char value[OUTOR_OPTIONS_NUMBER];
                    Outor::Outor outor = Outor::Outor();

                    outorTUI.getMenu().outorPrintw("(Outor) Your current temperature? ");
                    outorTUI.getMenu().outorGetstr(value);

                    outor.suggest(value);

                    outorTUI.getMenu().outorPrintw("(Outor) Press any key to continue...");
                    outorTUI.getMenu().outorGetch();

                    break;
                }
            case 'o':
                {
                    outorTUI.getMenu().outorPrintw("Outor by Leo `SapientLion` Markoff.\n");
                    outorTUI.getMenu().outorPrintw("Version ");
                    outorTUI.getMenu().outorPrintw(outorTUI.getVersion());
                    outorTUI.getMenu().outorPrintw("\n\n(Outor) Press any key to continue...");
                    outorTUI.getMenu().outorGetch();

                    break;
                }
            case 'q':
                {
                    eFlag = false;

                    break;
                }
        }

        outorTUI.getMenu().outorClear();
    }

    outorTUI.getMenu().outorEndwin();
#endif

    return 0;
}
