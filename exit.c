#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("This is an error message.\n");
        return 1;
    }
    else
    {
        printf("%s\n", argv[1]);
        return 0;
    }
    
}