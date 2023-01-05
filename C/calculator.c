#include <cs50.h>
#include <stdio.h>

void calculator ();

int main(void)
{
    calculator ();
}

void calculator ()
{
    float x = get_float ("x: ");
    float y = get_float ("y: ");
    char c = get_char ("What operation are looking for? ");

    if (c == '+')
        {
            // printf("%f ", x);
            // printf("+ ");
            // printf("%f ", y);
            // printf("= ");
            printf("%f %s %f %s %f\n", x, "+", y, "=", x + y);
        }
        else if (c == '-')
        {
            printf("%f %s %f %s %f\n", x, "-", y, "=", x - y);
        }
        else if (c == '*')
        {
            printf("%f %s %f %s %f\n", x, "*", y, "=", x * y);
        }
        else if (c == '/')
        {
            printf("%f %s %f %s %f\n", x, "/", y, "=", x / y);
        }
        else if (c == '%')
        {
            printf("%d %s %d %s %d\n", (int) x, "%", (int) y, "=", (int) x % (int) y);
        }

    char i = get_char ("Would you like another calculation? (Y/N) "); 

    if (i == 'Y' || i == 'y')
        calculator ();
    else
        return;
}