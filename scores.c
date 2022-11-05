#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int ("How many scores? ");
    int scores[n];
    int i, j;

    for (i = 0; i < n; i++)
    {
        scores[i] = get_int ("What's the score? ");

    }
    
    for (i = 0; i < n; i++)
    {
        j = j + scores[i];
    }

    printf("%.2f", (float) j / n);

    printf("\n");
}