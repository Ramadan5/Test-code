#include <cs50.h>
#include <stdio.h>

int length (string s);

int main(void)
{
    string s = get_string ("Number of Chars in word: ");
    printf("%d\n", length(s));
}

int length (string s)
{
    int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return i;
}