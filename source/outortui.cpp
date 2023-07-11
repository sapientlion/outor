///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                   // 
//    Outor - the ultimate outfit advisor and temperature converter made for fun.                                    //
//    Copyright (C) 2023  Leo "SapientLion" Markoff                                                                  // 
//                                                                                                                   //   
//    This program is free software: you can redistribute it and/or modify                                           //
//    it under the terms of the GNU General Public License as published by                                           //
//    the Free Software Foundation, either version 3 of the License, or                                              //
//    (at your option) any later version.                                                                            //   
//                                                                                                                   //
//    This program is distributed in the hope that it will be useful,                                                //
//    but WITHOUT ANY WARRANTY; without even the implied warranty of                                                 //
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the                                                  //
//    GNU General Public License for more details.                                                                   //
//                                                                                                                   //   
//    You should have received a copy of the GNU General Public License                                              //
//    along with this program.  If not, see <https://www.gnu.org/licenses/>.                                         //
//                                                                                                                   //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "../include/outortui.hpp"
#include "../include/outor.hpp"

Outor::OutorTUI::OutorTUI()
{
    menu = TextUI();
}

Outor::OutorTUI::~OutorTUI()
{
    menu.outorEndwin();
}

int Outor::OutorTUI::get()
{
    menu.outorPrintw(getTitle());
	menu.outorPrintw("\n\n");

    for(int index = 0; index < OUTOR_OPTIONS_NUMBER; index++)
    {
        menu.outorPrintw(options[index]);
    }

    return menu.outorRefresh();
}

outor_cchar Outor::OutorTUI::getTitle()
{
    return OUTOR_TITLE_NAME;
}

outor_cchar Outor::OutorTUI::getVersion()
{
    return OUTOR_VERSION;
}

Outor::TextUI Outor::OutorTUI::getMenu()
{
    return menu;
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
