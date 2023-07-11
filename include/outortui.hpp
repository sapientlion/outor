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

#ifndef OUTORTUI_HPP
#define OUTORTUI_HPP

#include "interfaces/ioutortui.hpp"
#include "tui.hpp"

namespace Outor
{
    class OutorTUI : public IOutorTUI
    {
        private:
            outor_cchar terms =
                "Outor  Copyright (C) 2023  Leo `SapientLion` Markoff. This program comes with ABSOLUTELY "
                "NO WARRANTY; for details type show w. This is free software, and you are welcome to "
                "redistribute it under certain conditions; type show c for details.";
            outor_cchar title = "Outor";
            outor_cchar options[OUTOR_OPTIONS_NUMBER] = {"(A) Get Advice\n ", "(O) About Outor\n",
                                                         "(Q) Exit Program\n"};
            TextUI menu;

        public:
            /**
             * @brief 				Construct a new OutorTUI object.
             *
             */
            OutorTUI();
            /**
             * @brief 				Destroy the OutorTUI object
             *
             */
            ~OutorTUI();

            /**
             * @brief 				Get all possible menu options and print them to the screen.
             *
             * @return int
             */
            int get();
            /**
             * @brief 				Get program name.
             *
             * @return outor_cchar	Program name.
             */
            outor_cchar getTitle();
            /**
             * @brief 				Get current program revision number.
             *
             * @return outor_cchar	Current program revision as a character string.
             */
            outor_cchar getVersion();
            /**
             * @brief 				Get the main menu of the program.
             *
             * @return TextUI		The main menu with the list of all possible options.
             */
            TextUI getMenu();

            /**
             * @brief 				Run the main program loop.
             *
             */
            void run();
    };
} // namespace Outor

#endif
