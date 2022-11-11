#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string ("Number of Chars in word: ");
    int l = strlen(s);
    printf("%d\n", l);
}