#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");
    char c = get_char("What's the operation you're looking for? ");
    if (c == '+')
    {
        printf("%d\n", x + y);
    }
    else if (c == '-')
    {
        printf("%d\n", x - y);
    }
    else if (c == '*')
    {
        printf("%d\n", x * y);
    }
    else if (c == '/')
    {
        printf("%d\n", x / y);
    }
}