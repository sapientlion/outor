#ifndef OUTORTUI_HPP
#define OUTORTUI_HPP

#include "interfaces/ioutortui.hpp"
#include "tui.hpp"

namespace Outor
{
    class OutorTUI : public IOutorTUI
    {
        private:
            outor_cchar m_options[OUTOR_OPTIONS_NUMBER] = {"Get (A)dvice\n ", "Ab(o)ut\n", "(Q)uit Program\n"};
            TextUI m_menu;

        public:
            /**
             * @brief 				Construct a new OutorTUI object.
             *
             */
            OutorTUI();
            /**
             * @brief 				Destroy the OutorTUI object
             *
             */
            ~OutorTUI();

            /**
             * @brief 				Get all possible menu options and print them to the screen.
             *
             * @return int
             */
            int get();
            /**
             * @brief 				Get current program revision number.
             *
             * @return outor_cchar	Current program revision as a character string.
             */
            outor_cchar getVersion();
            TextUI getMenu();

            void run();
    };
} // namespace Outor

#endif
