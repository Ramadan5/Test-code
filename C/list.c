#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int n;
    printf("How big of an array you need? ");
    scanf("%i", &n);

    int *list = malloc(n * sizeof(int));
    if (list == NULL)
    {
        printf("Error occured!");
        return 1;
    }
    
    for (int i = 0, j = 1; i < n; i++, j++)
    {
        list[i] = j;
        printf("%i\n", list[i]);
    }

    printf("\n");
    char *q = malloc(1);
    printf("Would you like to make any changes?(Y/N) ");
    scanf("%s", q);

    if (strcmp(q, "Y") == 0 || strcmp(q, "y") == 0)
    {
        free(q);

        int b;
        printf("How big of an array you now need? ");
        scanf("%i", &b);

        int *t = malloc(b * sizeof(int));
        if (t == NULL)
        {
            printf("Error occured!");
            return 1;
        }

        for (int i = 0; i < n; i++)
        {
            t[i] = list[i];
        }
        
        for (int i = n - 1, j = n; i < b; i++, j++)
        {
            t[i] = j;
        }

        free(list);

        list = t;

        for (int i = 0; i < b; i++)
        {
            printf("%i\n", list[i]);
        }
    }

    free(list);
}