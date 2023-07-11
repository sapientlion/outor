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

#include "../include/outor.hpp"
#include "../include/outortest.hpp"
#include "../include/outortui.hpp"

int main(int argc, char **argv)
{
#ifdef OUTOR_UNIT_TESTING

    Outor::OutorTester tester = Outor::OutorTester();

    tester.testNumberConversion();
    tester.testTemperatureConversion();

#else

    Outor::OutorTUI outorTUI = Outor::OutorTUI();

    outorTUI.run();

#endif

    return 0;
}
