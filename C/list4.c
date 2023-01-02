#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
}
node;

int main(void)
{
    node *linked = NULL;
    node *t = NULL;
    node *p = NULL;
    int n;
    printf("How many numbers are there? ");
    scanf("%i", &n);

    for (int i = 0; i < n; i++)
    {
        t = malloc(sizeof(node));
        t -> number = i;
        
        if (i == n)
        {
            t -> next = NULL;
        }
        else if (i == 0)
        {
            p = t;
            linked = t;
        }
        else
        {
            linked -> next = t;
            linked = t;
        }
    }

    linked = p;

    while (linked != NULL)
    {
        printf("%i\n", linked -> number);
        linked = linked -> next;
    }

    while (linked != NULL)   
    {
        t = linked -> next;
        free(linked);
        linked = t;
    }
}