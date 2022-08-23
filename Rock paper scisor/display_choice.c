#include <stdio.h>

void display_choice(char *you,char *AI)
{
    if (*you=='r')
    {
        printf("You choose Rock! and ");
    }
    else if (*you=='p')
    {
        printf("You choose Paper! and ");
    }
    else if (*you=='s')
    {
        printf("You choose Scisor! and ");
    }

    if (*AI=='r')
    {
        printf("Computer choose Rock!\n");
    }
    else if (*AI=='p')
    {
        printf("Computer choose Paper!\n");
    }
    else if (*AI=='s')
    {
        printf("Computer choose Scisor!\n");
    }
}
