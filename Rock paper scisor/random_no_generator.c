#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random_no_generator()
{
    int num;
    srand(time(NULL));
    num = rand()%100+1;
    return num;
}