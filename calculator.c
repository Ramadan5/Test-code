#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");
    char c = get_char("Do you want to sum? ");
    if (c == 'Y')
    {
        printf("%d\n", x + y);
    }
    else if (c == 'N')
    {
        printf("%d\n", x - y);
    }
}