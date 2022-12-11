#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("How many question marks? ");
    for (int i = 0; i < n; i++)
    {   printf("?");
        printf("\n");
    }
}