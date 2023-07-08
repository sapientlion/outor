///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																													 //
// Description: Outfit Advisor: function declarations.																 //
//																													 //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef OUTOR_H
#define OUTOR_H

#include "global.h"

/**
 * @brief 			Print the main menu to the screen and get access to all program features.
 *
 */
void mainMenu();
/**
 * @brief 			Get advice on what to wear during specified weather conditions.
 *
 */
void advisor();
/**
 * @brief 			Convert given temperature to degrees Fahrenheit.
 *
 * @param temp		Temperature to convert.
 * @return double	Temperature in degrees Fahrenheit.
 */
double converter(int temp);

#endif
