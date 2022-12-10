#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(void)
{
    int i;
    string names[] = {"Muhammad", "Hesham"};
    string numbers[] = {"+20111-2535-915", "+20106-8277-428"};
    string x = get_string("Who are you looking for? ");
    
    x[0] = toupper(x[0]);

    for (i = 0; i < 2; i++)
    {
        if (strcmp(names[i], x) == 0)
        {
            printf("Number is: %s\n", numbers[i]);
            return 0;
        }
    }
    printf("Not in the phonebook!\n");
    return 1;
}