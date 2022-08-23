#include <stdio.h>
#include "login.c"
#include "random_no_generator.c"
#include "game_logic.c"
#include "display_choice.c"

int main()
{
	if (login()==1)
	{
		printf("welcome to the game.\n");
		PLAY:
		char play_again = 'n';
		int random_num;
		char you,AI;
		random_num = random_no_generator();
		// printf("%d\n",random);
		if (random_num%5==0)
		{
			AI = 'r';
		}
		else if (random_num%2==0)
		{
			AI = 'p';
		}
		else
		{
			AI = 's';
		}
		// printf("%c\n",AI);
		RETRY:
		printf("\nEnter your choice:: \n'r' for Rock\n'p' for Paper\n's' for Scisor\n--> ");
		scanf("\n%c",&you);
		if (you!='r')
		{
			if (you!='p')
			{
				if (you!='s')
				{
					printf("\nInvalid choice! pls try again..\n");
					goto RETRY;
				}
			}
		}
		int result = game_logic(&you,&AI);
		display_choice(&you,&AI);
		if (result==0)
		{
			printf("Draw!\n");
		}
		if (result==-1)
		{
			printf("You loose!\n");
		}
		if (result==1)
		{
			printf("You win!\n");
		}
		printf("\n\nPlay again? (y/n)\n");
		scanf("\n%c",&play_again);
		if (play_again=='y' || play_again=='Y')
		{
			goto PLAY;
		}
	}
	else 
	{
		printf("\nGame Over!\n");
	}
	return 0;
}