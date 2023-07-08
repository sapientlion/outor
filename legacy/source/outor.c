///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																													 //
// Description: Outfit Advisor: function definitions.                           									 //
//																													 //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "../include/outor.h"

void mainMenu()
{
    char numIn[25];
    char *numEnd;
    int num;

    printf("\n(1) Advisor\n"
           "(2) Version Info\n"
           "(0) Quit");
    printf("\n\n - Choose your menu option: ");
    fgets(numIn, sizeof(numIn), stdin);
    num = strtol(numIn, &numEnd, 10);
    printf("\n");

    switch(num)
    {
        default:
            printf(" - Error occured! Incorrect input.");
            mainMenu();
            break;
        case 0:
            printf("(!) Exited.\n\n");
            break;
        case 1:
            advisor();
            break;
        case 2:
            printf(" - Version: 1.3.5.31819\n");
            mainMenu();
            break;
    }
};

void advisor()
{
    char tempIn[25];
    char *tempEnd;
    int temp;

    printf(" - Enter your temperature: ");
    fgets(tempIn, sizeof(tempIn), stdin);
    temp = strtol(tempIn, &tempEnd, 10);
    printf("\n");
    printf(" - Celsius: %d; Fahrenheit: %0.2lf\n\n", temp, converter(temp));

    switch(temp)
    {
        default:
            printf(" - Error! Temperature limit has been reached.\n");
            break;
        case -49 ... 9:
            printf(" - Suggestion: warm clothes only. Yikes!\n");
            break;
        case 10 ... 14:
            printf(" - Suggestion: somewhat warm clothes. Ok.\n");
            break;
        case 15 ... 50:
            printf(" - Suggestion: light clothes only. Yay!\n");
            break;
    }

    mainMenu();
};

double converter(int temp)
{
    double b, formula = 32;

    b = temp;

    return formula += b * 9 / 5;
};
