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

    node *n = malloc(sizeof(node));

    if (n == NULL)
    {
        return 1;
    }

    // (*n).number = 1;
    n -> number = 1;
    n -> next = NULL;

    linked = n;

    n = malloc(sizeof(node));

    if (n == NULL)
    {
        free(linked);
        return 1;
    }

    n -> number = 2;
    n -> next = NULL;
    
    linked -> next = n;

    n = malloc(sizeof(node));

    if (n == NULL)
    {
        free(linked->next);
        free(linked);
        return 1;
    }

    n -> number = 3;
    n -> next = NULL;

    linked -> next -> next = n;

    for (node *t = linked; t != NULL; t = t -> next)
    {
        printf("%i\n", t -> number);
    }

    while (linked != NULL)
    {
        node *t = linked -> next;
        free(linked);
        linked = t;
    }
}