#ifndef OUTORTUI_HPP
#define OUTORTUI_HPP

#include "interfaces/ioutortui.hpp"
#include "tui.hpp"

namespace Outor
{
    class OutorTUI : public IOutorTUI
    {
        private:
            outor_cchar title = "Outor";
            outor_cchar options[OUTOR_OPTIONS_NUMBER] = {"(A) Get Advice\n ", "(O) About Outor\n",
                                                         "(Q) Exit Program\n"};
            TextUI menu;

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
             * @brief 				Get program name.
             *
             * @return outor_cchar	Program name.
             */
            outor_cchar getTitle();
            /**
             * @brief 				Get current program revision number.
             *
             * @return outor_cchar	Current program revision as a character string.
             */
            outor_cchar getVersion();
            /**
             * @brief 				Get the main menu of the program.
             *
             * @return TextUI		The main menu with the list of all possible options.
             */
            TextUI getMenu();

            /**
             * @brief 				Run the main program loop.
             *
             */
            void run();
    };
} // namespace Outor

#endif
