#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char *s = get_string ("s? ");
    char *t = malloc (strlen(s) + 1);

    if (t == NULL)
    {
        printf("Not enough memory.");
        return 1;
    }

    strcpy(t, s);

    t[0] = toupper(t[0]);

    printf("s is: %s\n", s);
    printf("t is: %s\n", t);

    printf("%p\n", s);
    printf("%p\n", t);

    free(t);
}