#ifndef TUI_HPP
#define TUI_HPP

#include "interfaces/itui.hpp"

namespace Outor
{
    class TextUI : public ITextUI
    {
        public:
            /**
             * @brief Construct a new TextUI object
             *
             */
            TextUI();
            /**
             * @brief Destroy the TextUI object
             *
             */
            ~TextUI();

            /**
             * @brief 			Print buffered value to the screen.
             *
             * @param value		A string literal to print.
             * @return int
             */
            int outorPrintw(outor_cchar value);
            /**
             * @brief			Refresh the screen and populate it with buffered values.
             *
             * @return int
             */
            int outorRefresh();
            /**
             * @brief			Get character input.
             *
             * @return int
             */
            int outorGetch();
            /**
             * @brief			Get string input.
             *
             * @param value
             * @return int
             */
            int outorGetstr(outor_cchar value);
            /**
             * @brief			Clear the screen from clutter.
             *
             * @return int
             */
            int outorClear();
            /**
             * @brief			End curses session.
             *
             * @return int
             */
            int outorEndwin();
    };
} // namespace Outor

#endif
