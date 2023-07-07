#ifndef CONVERTER_HPP
#define CONVERTER_HPP

#include "global.hpp"

namespace Outor
{
    class Converter
    {
        private:
            static bool isApplicable(outor_cchar value)
            {
                //
                // Given value may be uninitialized.
                //
                if(value == nullptr)
                {
                    return false;
                }

                int length = getLength(value);

                //
                // Given value may be empty.
                //
                if(length <= 0)
                {
                    return false;
                }

                return true;
            }
            /**
             * @brief 			Convert character string to integer literal.
             *
             * @param length	Total number of string characters.
             * @param value		Character string to convert.
             * @return double	Character string converted to integer literal.
             */
            static double toDecimal(outor_cchar value)
            {
                double number = 0.0;

                if(!isApplicable(value))
                {
                    return number;
                }

                bool sFlag = isNegative(value[0]);
                int cursorPosition = 0;
                int length = getLength(value);

                //
                // Given value is a negative number.
                //
                if(sFlag)
                {
                    cursorPosition++;
                }

                for(cursorPosition; cursorPosition < length; cursorPosition++)
                {
                    number = (number + value[cursorPosition]) - 48;

                    if(cursorPosition + 1 != length)
                    {
                        number *= 10;
                    }
                }

                //
                // Don't forget to make the number a negative one if that's the case.
                //
                if(sFlag)
                {
                    number *= (-1);
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
            static double toReal(outor_cchar value)
            {
                double number = 0.0;

                if(!isApplicable(value))
                {
                    return number;
                }

                bool sFlag = isNegative(value[0]);
                int cursorPosition = 0;
                int length = getLength(value);

                //
                // Given value is a negative number.
                //
                if(sFlag)
                {
                    cursorPosition++;
                }

                int fPointPosition = 0;

                //
                // Find floating point position for future reference.
                //
                for(cursorPosition; cursorPosition < length; cursorPosition++)
                {
                    if(value[cursorPosition] == '.')
                    {
                        fPointPosition = cursorPosition;

                        break;
                    }
                }

                //
                // Number of digits located after the floating point.
                //
                int rightmostLength = length - fPointPosition;

                if(!sFlag)
                {
                    cursorPosition = 0;
                }
                else
                {
                    cursorPosition = 1;
                }

                //
                // Add leftmost digits first.
                //
                for(cursorPosition; cursorPosition < fPointPosition; cursorPosition++)
                {
                    number = (number + value[cursorPosition]) - 48;

                    if(cursorPosition + 1 != fPointPosition)
                    {
                        number *= 10;
                    }
                }

                double rightmostDigits = 0.0;
                //
                // The first character is assumed to be located at index[0]. Reset the counter and place it there.
                //
                cursorPosition = length - 1;

                //
                // Add rightmost digits.
                //
                for(cursorPosition; cursorPosition > fPointPosition; cursorPosition--)
                {
                    rightmostDigits = (rightmostDigits + value[cursorPosition]) - 48;

                    if(cursorPosition - 1 != fPointPosition - 1)
                    {
                        rightmostDigits /= 10;
                    }
                }

                number += rightmostDigits;

                //
                // Don't forget to make the number a negative one if that's the case.
                //
                if(sFlag)
                {
                    number *= (-1);
                }

                return number;
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

            static bool isNegative(char sign);
            static bool isPositive(char sign);
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
