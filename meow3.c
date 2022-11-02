#include <cs50.h>
#include <stdio.h>

void meow(int x);

int main(void)
{
   {
       meow(5);
   }
}

void meow(int x)
{
	for (int i = 0; i < x; i++)
	{
	     printf("meow\n");
	}
}
