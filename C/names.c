#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string names [] = {"loser", "disappointment", "won't change", "die already", "stop dreaming", "good for nothing", "slow"};

    for (int i = 0; i < 7; i++)
    {
        if (strcmp(names[i], "disappointment") == 0)
        // if (names[i] == "loser")
        {
            printf("Always will be!\n");
            return 0;
        }
    }
    printf("Maybe!\n");
    return 1;
}