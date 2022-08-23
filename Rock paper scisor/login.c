/*		Login v2.0		*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "delay.c"
#define MAX 100

int login()
{
	char u1[]="hk", u2[MAX], p1[]="123", p2[MAX];
	printf("Enter username and password:- \n\n\n");
	int count=1;
	RETRY:
	printf("\t\t\t    username: ");
	gets(u2);
	printf("\t\t\t    password: ");
	int i=0;
	do
	{
		p2[i] = getch();
		if (p2[i]!='\r')
		{
			printf("*");
			i++;
		}
	}while (p2[i]!='\r');
	p2[i] = '\0';
	if ((strcmp(u1,u2)==0)&&(strcmp(p1,p2)==0))
	{
		printf("\n\nLoging in");
		for (i=0;i<3;i++)
		{
			delay(0.75);
			printf(".");
		}
		printf("\n\n");
		return 1;
	}
	else
	{
		count++;
		printf("\n\nInvalid username or password!\n\n");
		if (count<4)
		{
			printf("Retry [%d]:\n\n",count);
			goto RETRY;
		}
		else if (count>=4)
		{
			printf("\n\nRetry limit exceed!\n\n");
			return 0;
		}
	}
	return 0;
}