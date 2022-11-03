#include <cs50.h>
#include <stdio.h>

float discount(float price, int percentage);

int main(void)
{
    float price = get_float ("What's the item's price? ");
    float sale = get_float ("What's the discount percentage? ");
    float Final_price = discount(price, sale);
    printf("%.2f\n", Final_price);
}

float discount(float price, int percentage)
{
    return price * (100 - percentage) / 100;
}

// return price - price * percentage / 100;