#include <stdio.h>

int game_logic(char *you,char *AI)
{
    if (*you == *AI)
    {
        return 0;
    }

    //  rp
    if (*you=='r' && *AI=='p')
    {
        return -1;
    }
    else if (*you=='p' && *AI=='r')
    {
        return 1;
    }
    //    rs
    if (*you=='r' && *AI=='s')
    {
        return 1;
    }
    else if (*you=='s' && *AI=='r')
    {
        return -1;
    }
    //    ps
    if (*you=='s' && *AI=='p')
    {
        return 1;
    }
    else if (*you=='p' && *AI=='s')
    {
        return -1;
    }    
}