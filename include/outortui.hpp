#ifndef OUTORTUI_HPP
#define OUTORTUI_HPP

#include "tui.hpp"

namespace Outor
{
    class OutorTUI
    {
        private:
            outor_cchar m_options[2] = {"Get (A)dvice\n ", "(Q)uit Program\n"};
            TextUI m_menu;

        public:
            /**
             * @brief Construct a new OutorTUI object.
             *
             */
            OutorTUI();
            /**
             * @brief 		Destroy the OutorTUI object
             *
             */
            ~OutorTUI();

			/**
			 * @brief 		Get all menu options na dprint them to the screen.
			 *
			 * @return int
			 */
            int get();
            TextUI getMenu();
    };
} // namespace Outor

#endif
