#include <cs50.h>
#include <stdio.h>

float discount(float n);

int main(void)
{
    float price = get_float ("What's the item's price? ");
    float sale = discount(price);
    printf("%.2f\n", sale);
    
}


float discount(float n)
{
    return n * 0.85;
}