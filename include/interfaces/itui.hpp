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
