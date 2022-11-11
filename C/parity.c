#include <cs50.h>
#include <stdio.h>

int main(void)
{
	int n = get_int("What's the number? ");
	if (n % 2 == 0)
	{
		printf("This is an even number\n");
	}
	else
	{
		printf("This is an odd number\n");
	}
}
