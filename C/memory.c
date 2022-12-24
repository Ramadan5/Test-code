#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n = 3;
    int *x = malloc (n * sizeof(int));

    x[0] = 72;
    x[1] = 73;
    x[2] = 33;

    for (int i = 0; i < n; i++)
    {
        printf("%i ", x[i]);
    }
    printf("\n");

    free(x);
}