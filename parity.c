#include <cs50.h>
#include <stdio.h>

int main(void)
{
	int n = get_int("n: ");
	if (n % 2 == 0)
	{
		printf("This is an even number\n");
	}
	else
	{
		printf("This is an odd number\n");
	}
}
