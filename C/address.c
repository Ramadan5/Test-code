#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = 50;
    int *p = &n;

    printf("%i\n", n);
    printf("%i\n", *p);
    printf("%p\n", p);
    printf("%p\n", &n);
}