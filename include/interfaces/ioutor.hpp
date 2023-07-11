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

#ifndef IOUTOR_HPP
#define IOUTOR_HPP

#include "../global.hpp"

namespace Outor
{
    class IOutor
    {
        public:
            enum class SuggestionFlag
            {
                SF_UNKNOWN, // The suggestion is unknown.
                SF_WARM,    // Warm clothes.
                SF_SOSO,    // Something in between; neither warm or light clothes.
                SF_LIGHT    // Light clothes.
            };

            /**
             * @brief Give advice to user on what to wear during specified weather conditions.
             *
             * @param temperature
             * @return SuggestionFlag
             */
            virtual SuggestionFlag suggest(outor_cchar temperature) = 0;
    };
} // namespace Outor

#endif
