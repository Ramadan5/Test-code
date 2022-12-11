#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct
{
    string name;
    string number;
}
person;

int main(void)
{
    person people[2];

    people[0].name = "Muhammad";
    people[0].number = "+20111-2535-915";

    people[1].name = "Hesham";
    people[1].number = "+20106-8277-428";

    string x = get_string("Who are you looking for? ");
    x[0] = toupper(x[0]);

    for (int i = 0; i < 2; i++)
    {
        if (strcmp(people[i].name, x) == 0)
        {
            printf("Number is: %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not in the phonebook!\n");
    return 1;
}