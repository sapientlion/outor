#include "include/outor.hpp"
#include "include/outortest.hpp"
#include "include/outortui.hpp"

int main(int argc, char **argv)
{
    /*Outor::OutorTester tester = Outor::OutorTester();

    tester.testNumberConversion();*/

    bool eFlag = true;
    Outor::OutorTUI mainMenu = Outor::OutorTUI();

    while(eFlag)
    {
        mainMenu.getMenu().outorClear();
        mainMenu.get();
        int value = mainMenu.getMenu().outorGetch();
		mainMenu.getMenu().outorClear();

        switch(value)
        {
            case 'a':
                {
                    char value[] = "";
                    Outor::Outor outor = Outor::Outor();

                    mainMenu.getMenu().outorPrintw("(Outor) Your current temperature? ");
                    mainMenu.getMenu().outorGetstr(value);

                    outor.suggest(value);

					mainMenu.getMenu().outorPrintw("(Outor) Press any key to continue...");
					mainMenu.getMenu().outorGetch();

                    break;
                }
            case 'q':
                {
                    eFlag = false;

                    break;
                }
        }
    }

    mainMenu.getMenu().outorEndwin();

    return 0;
}
