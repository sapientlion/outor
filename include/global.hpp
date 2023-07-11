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

#ifndef GLOBAL_HPP
#define GLOBAL_HPP

#include <iostream>
#include <ncurses.h>

#define OUTOR_OPTIONS_NUMBER 3
#define OUTOR_TITLE_NAME "Outor"
#define OUTOR_VERSION_MAJOR "0"
#define OUTOR_VERSION_MINOR "1"
#define OUTOR_VERSION_PATCH "0"
#define OUTOR_VERSION OUTOR_VERSION_MAJOR "." OUTOR_VERSION_MINOR "." OUTOR_VERSION_PATCH

typedef const char *outor_cchar; // A shortcut for character strings.

#endif
