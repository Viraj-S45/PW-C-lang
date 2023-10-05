#include <stdio.h>
int main()
{

    int cost_price, selling_price, margin;

    printf("Enter the Cost Price: ");
    scanf("%d", &cost_price);
    printf("Enter the Selling Price: ");
    scanf("%d", &selling_price);

    if (cost_price > selling_price)
    {
        printf("Loss");
    }
    else
    {
        margin = selling_price - cost_price;
        printf("Profit of %d", margin);
    }

    return 0;
}