#include "../include/tui.hpp"

Outor::TextUI::TextUI()
{
    initscr();
}

Outor::TextUI::~TextUI()
{
    endwin();
}

int Outor::TextUI::outorPrintw(const char *value)
{
    return printw(value);
}

int Outor::TextUI::outorRefresh()
{
    return refresh();
}

int Outor::TextUI::outorGetch()
{
    return getch();
}

int Outor::TextUI::outorGetstr(outor_cchar value)
{
	return getstr((char *)value);
}

int Outor::TextUI::outorClear()
{
	return clear();
}

int Outor::TextUI::outorEndwin()
{
    return endwin();
}
