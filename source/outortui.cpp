#include "../include/outortui.hpp"

Outor::OutorTUI::OutorTUI()
{
    m_menu = Outor::TextUI();
}

Outor::OutorTUI::~OutorTUI()
{
    m_menu.outorEndwin();
}

int Outor::OutorTUI::get()
{
    for(int index = 0; index < OUTOR_OPTIONS_NUMBER; index++)
    {
        m_menu.outorPrintw(m_options[index]);
    }

    return m_menu.outorRefresh();
}

outor_cchar Outor::OutorTUI::getVersion()
{
	return OUTOR_VERSION;
}

Outor::TextUI Outor::OutorTUI::getMenu()
{
    return m_menu;
}
