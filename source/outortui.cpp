#include "../include/outortui.hpp"

Outor::OutorTUI::OutorTUI()
{
    m_menu = Outor::TextUI();

    for(int index = 0; index < 2; index++)
    {
        m_menu.outorPrintw(m_options[index]);
        m_menu.outorRefresh();
    }
}

Outor::OutorTUI::~OutorTUI()
{
    m_menu.outorEndwin();
}

int Outor::OutorTUI::get()
{
    for(int index = 0; index < 2; index++)
    {
    	m_menu.outorPrintw(m_options[index]);
        m_menu.outorRefresh();
    }

    return m_menu.outorRefresh();
}

Outor::TextUI Outor::OutorTUI::getMenu()
{
    return m_menu;
}
