#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int ("How many bricks to do you want? ");

    for (int i = 0; i < n; i++)
    {   
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        printf("\n");
    }   
}