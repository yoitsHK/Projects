#include <stdio.h>
#include <time.h>						 // include this header file

void delay(float no_of_sec)
{
	float milli_sec = 1000*no_of_sec;		//	1 sec = 1000 milli secs
	clock_t start = clock();			//	clock_t is data type and clock() is indef function
	while (clock()<start + milli_sec);
}
