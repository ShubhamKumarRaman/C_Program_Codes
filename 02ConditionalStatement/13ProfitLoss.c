// If cost price and selling price of an item is input through the keyboard, write a program to determine whether the seller has made profit or incurred loss. Also determine how much profit he made or loss he incurred.
#include <stdio.h>
#include <conio.h>
void main()
{
    int cp, sp, profit, loss;
    printf("\nEnter Cost price of the item: ");
    scanf("%d", &cp);
    printf("Enter Selling price of the item: ");
    scanf("%d", &sp);

    if (sp > cp)
    {
        profit = sp - cp;
        printf("Seller has made profit of Rs. %d", profit);
    }
    else if (cp > sp)
    {
        loss = cp - sp;
        printf("Seller has incurred loss of Rs. %d", loss);
    }
    else
    {
        printf("Seller has neither made profit nor incurred loss");
    }
    getch();
}