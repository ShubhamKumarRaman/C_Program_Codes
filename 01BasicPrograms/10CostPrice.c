// If the total selling price of 15 items and the total profit earned on them is input through the keyboard, write a program to find the cost price of one item.
#include <stdio.h>
#include <conio.h>
int main()
{
    float allSellPrice, SellPrice, Profit, allCostPrice, CostPrice;
    float spa, sp, p, cpa, cp;
    printf("\nEnter the Selling price of 15 items : Rs. ");
    scanf("%f", &allSellPrice);
    printf("\nEnter the profit earned on 15 items : Rs. ");
    scanf("%f", &Profit);

    allCostPrice = allSellPrice - Profit;
    CostPrice = allCostPrice / 15;
    SellPrice = allSellPrice / 15;

    printf("\n--------------------------------------------------");
    printf("\nSelling price of each items is    : Rs. %.2f", SellPrice);
    printf("\nCost price of each item is        : Rs. %.2f", CostPrice);
    printf("\nCost price of all 15 items is     : Rs. %.2f", allCostPrice);
    getch();
    return 0;
}