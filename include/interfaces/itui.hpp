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

#ifndef ITUI_HPP
#define ITUI_HPP

#include "../global.hpp"

namespace Outor
{
    class ITextUI
    {
        public:
            /**
             * @brief			Print given value to the screen.
             *
             * @param value		Value in question.
             * @return int
             */
            virtual int outorPrintw(const char *value) = 0;
			/**
			 * @brief 			Refresh the screen and print buffered data to the screen.
			 *
			 * @return int
			 */
            virtual int outorRefresh() = 0;
			/**
			 * @brief 			Get a character input.
			 *
			 * @return int
			 */
            virtual int outorGetch() = 0;
			/**
			 * @brief 			End curses session.
			 *
			 * @return int
			 */
            virtual int outorEndwin() = 0;
    };
} // namespace Outor

#endif
