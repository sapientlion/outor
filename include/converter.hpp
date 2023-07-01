#ifndef CONVERTER_HPP
#define CONVERTER_HPP

#include "global.hpp"

namespace Outor
{
    class Converter
    {
        private:
            /**
             * @brief 			Convert character string to integer literal.
             *
             * @param length	Total number of string characters.
             * @param value		Character string to convert.
             * @return double	Character string converted to integer literal.
             */
            static double toDecimal(int length, outor_cchar value)
            {
                int number = 0;

                if(value == nullptr)
                {
                    return number;
                }

                int cursorPos = 0;

                if(value[cursorPos] == '-')
                {
                    cursorPos++;
                }

                //
                // In case of a single-digit number.
                //
                if(length < 1)
                {
                    number += value[cursorPos] - 48;
                }

                if(length >= 1)
                {
                    for(cursorPos; cursorPos < length; cursorPos++)
                    {
                        number = (number + value[cursorPos]) - 48;

                        if(cursorPos + 1 != length)
                        {
                            number *= 10;
                        }
                    }
                }

                return number;
            }

            /**
             * @brief 					Convert character string to double literal.
             *
             * @param length			Total number of string characters.
             * @param rNumberLength		Number of digits found after the floating point.
             * @param value				Character string to process.
             * @return double			Character string converted to double literal.
             */
            static double toReal(int length, int rNumberLength, outor_cchar value, int floatPointPos)
            {
                int lNumber = 0;
                double rNumber = 0.0;

                if(value == nullptr)
                {
                    return rNumber;
                }

                int cursorPos = 0;

                if(value[cursorPos] == '-')
                {
                    cursorPos++;
                }

                if(floatPointPos < 2)
                {
                    lNumber += value[cursorPos] - 48;
                }

                //
                // Process leftmost digits.
                //
                if(floatPointPos >= 2)
                {
                    for(cursorPos; cursorPos < floatPointPos; cursorPos++)
                    {
                        lNumber = (lNumber + value[cursorPos]) - 48;

                        if(cursorPos + 1 != floatPointPos)
                        {
                            lNumber *= 10;
                        }
                    }
                }

                //
                // Process rightmost digits.
                //
                if(rNumberLength > 1)
                {
                    for(cursorPos = length - 1; cursorPos >= rNumberLength; cursorPos--)
                    {
                        rNumber = (rNumber + value[cursorPos]) - 48;
                        rNumber /= 10;
                    }
                }
                else
                {
                    rNumber = (rNumber + value[cursorPos]) - 48;
                }

                return lNumber + rNumber;
            }

        public:
            /**
             * @brief			Get a total number of string characters.
             *
             * @param value		Character string to process.
             * @return int		Total number of string characters.
             */
            static int getLength(outor_cchar value);
            /**
             * @brief 			Determine whether given character string is a real number.
             *
             * @param value 	Character string to process.
             * @return true		Return TRUE when a given character string is a real number.
             * @return false	Return FALSE when a given character string is either not a real number or the variable
             * was left uninitialized.
             */
            static bool isReal(outor_cchar value);
            /**
             * @brief 			Convert given character string.
             *
             * @param value		Character string to process.
             * @return double	Character string converted to double.
             */
            static double convert(outor_cchar value);
    };
} // namespace Outor

#endif
