#include "../include/outortui.hpp"
#include "../include/outor.hpp"

Outor::OutorTUI::OutorTUI()
{
    m_menu = TextUI();
}

Outor::OutorTUI::~OutorTUI()
{
    m_menu.outorEndwin();
}

int Outor::OutorTUI::get()
{
    for(int index = 0; index < OUTOR_OPTIONS_NUMBER; index++)
    {
        m_menu.outorPrintw(m_options[index]);
    }

    return m_menu.outorRefresh();
}

outor_cchar Outor::OutorTUI::getVersion()
{
    return OUTOR_VERSION;
}

Outor::TextUI Outor::OutorTUI::getMenu()
{
    return m_menu;
}

void Outor::OutorTUI::run()
{
    bool eFlag = true;
    OutorTUI outorTUI = OutorTUI();

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
                    Outor outor = Outor();

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

    return;
}
