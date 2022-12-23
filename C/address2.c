#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string s = "HI!";
    char *c = "HEY!";
    char *p = &s[0];

    printf("%s\n", s);
    printf("%c\n", *p);
    printf("%p\n", &c);

    printf("%c\n", *c);
    printf("%c\n", *(c + 1));
    printf("%c\n", *(c + 2));
    printf("%c\n", *(c + 3));
    
    printf("%p\n", &s);
    printf("%p\n", p);
    printf("%p\n", s);
}