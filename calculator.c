#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float x = get_float ("x: ");
    float y = get_float ("y: ");
    char c = get_char ("What's the operation you're looking for? ");
    if (c == '+')
    {
        printf("%f\n", x + y);
    }
    else if (c == '-')
    {
        printf("%f\n", x - y);
    }
    else if (c == '*')
    {
        printf("%f\n", x * y);
    }
    else if (c == '/')
    {
        printf("%f\n", x / y);
    }
}