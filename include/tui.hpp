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

#ifndef TUI_HPP
#define TUI_HPP

#include "interfaces/itui.hpp"

namespace Outor
{
    class TextUI : public ITextUI
    {
        public:
            /**
             * @brief Construct a new TextUI object
             *
             */
            TextUI();
            /**
             * @brief Destroy the TextUI object
             *
             */
            ~TextUI();

            /**
             * @brief 			Print buffered value to the screen.
             *
             * @param value		A string literal to print.
             * @return int
             */
            int outorPrintw(outor_cchar value);
            /**
             * @brief			Refresh the screen and populate it with buffered values.
             *
             * @return int
             */
            int outorRefresh();
            /**
             * @brief			Get character input.
             *
             * @return int
             */
            int outorGetch();
            /**
             * @brief			Get string input.
             *
             * @param value
             * @return int
             */
            int outorGetstr(outor_cchar value);
            /**
             * @brief			Clear the screen from clutter.
             *
             * @return int
             */
            int outorClear();
            /**
             * @brief			End curses session.
             *
             * @return int
             */
            int outorEndwin();
    };
} // namespace Outor

#endif
