#include <cs50.h>
#include <stdio.h>

int main(void)
{
	int mine = 2;
	int points = get_int("How much did you score? ");

	if (points > mine)
	{
		printf("Nice dude!\n");
	}
	else if (points < mine)
	{
		printf("Guess I'm better that you then.\n");
	}
	else
	{
		printf("My nigga!\n");
	}
}
