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

#ifndef OUTOR_HPP
#define OUTOR_HPP

#include "global.hpp"
#include "interfaces/ioutor.hpp"
#include "tempcon.hpp"

namespace Outor
{
    class Outor : public IOutor
    {
        private:
            int temperature = 0;
            TempConverter tempConverter;

        public:
            /**
             * @brief Construct a new Outor object.
             *
             */
            Outor();
            /**
             * @brief Construct a new Outor object.
             *
             * @param temperature Temperature value to process.
             */
            Outor(outor_cchar temperature);
            /**
             * @brief Destroy the Outor object.
             *
             */
            ~Outor();

            SuggestionFlag suggest(outor_cchar temperature);
    };
} // namespace Outor

#endif
