#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int numbers [] = {4, 6, 8, 2, 7, 5, 0};

    for (int i = 0; i < 7; i++)
    {
        if (numbers[i] == 7)
        {
            printf("You did it!\n");
            return 0;
        }
    }
    printf("Better luck next time!\n");
    return 1;
}