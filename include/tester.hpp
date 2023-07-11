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

#ifndef TESTER_HPP
#define TESTER_HPP

#include "global.hpp"

namespace Outor
{
    class Tester
    {
        public:
            /**
             * @brief			Assert whether given objects are equal or not.
             *
             * @tparam T		Expected object type.
             * @tparam U		Given object type.
             * @param x			Expected value.
             * @param y			Given value.
             * @return true		Return TRUE when objects are equal.
             * @return false	Return FALSE when objects are different.
             */
            template <typename T, typename U> static bool assertEquals(T x, U y)
            {
                if(x != y)
                {
                    std::cout << "Outor::Tester::FAIL: given objects aren't equal: " << x << " and " << y << std::endl;

                    return false;
                }

                std::cout << "Outor::Tester::SUCCESS: given objects are equal: " << x << " and " << y << std::endl;

                return true;
            }
    };
} // namespace Outor

#endif
