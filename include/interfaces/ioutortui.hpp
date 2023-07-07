#ifndef IOUTORTUI_HPP
#define IOUTORTUI_HPP

#include "../global.hpp"
#include "../tui.hpp"

namespace Outor
{
    class IOutorTUI
    {
        public:
            virtual int get() = 0;
            virtual outor_cchar getVersion() = 0;
            virtual TextUI getMenu() = 0;

            virtual void run() = 0;
    };
} // namespace Outor

#endif
