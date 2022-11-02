#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float price = get_double ("What's the item's price? ");
    float discount = price * 0.85;
    printf("Sale price: %.2f\n", discount);
}