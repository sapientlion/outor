#include "../include/outor.hpp"
#include "../include/tui.hpp"

Outor::Outor::Outor()
{
    m_tempConverter = TemperatureConverter();

    return;
}

Outor::Outor::Outor(outor_cchar temperature)
{
    suggest(temperature);

    return;
}

Outor::Outor::~Outor()
{
    return;
}

Outor::SuggestionFlag Outor::Outor::suggest(outor_cchar value)
{
    double temperature = m_tempConverter.convert(value);

    if(m_temperature != *value)
    {
        m_temperature = *value;
    }

    TextUI textUI = TextUI();

	textUI.outorClear();

    switch(m_temperature)
    {
        case 15 ... 50:
            {
                textUI.outorPrintw("(Outor) Light clothes only. Yay!\n\n");

                return SuggestionFlag::SF_LIGHT;
            }
        case 10 ... 14:
            {
                textUI.outorPrintw("(Outor) Somewhat warm clothes. Ok.\n\n");

                return SuggestionFlag::SF_SOSO;
            }
        case -49 ... 9:
            {
                textUI.outorPrintw("(Outor) Warm clothes only. Yikes!\n\n");

                return SuggestionFlag::SF_WARM;
            }
        default:
            {
                textUI.outorPrintw("(Outor) Error! Temperature limit has been reached.\n\n");
				textUI.outorRefresh();

                return SuggestionFlag::SF_UNKNOWN;
            }
    }
}
