// While purchasing certain items, a discout of 10% is offered if the quantity purchased is more than 1000. If quantity and price per item are input through the keyboard, write a program to calculate the total expenses.
#include <stdio.h>
#include <conio.h>
int main()
{
    int qty;
    float dis = 0;
    float rate, total;
    printf("\nEnter quantity        :");
    scanf("%d", &qty);
    printf("\nEnter rate (per item) :");
    scanf("%f", &rate);

    if (qty > 1000)
        dis = 10;
    //Find the total expences = Total price - discount
    total = (qty * rate) - (qty * rate * dis / 100);
    printf("\nGrand Total        Rs. %f", qty * rate);
    printf("\n------------------------------------");
    printf("\nDiscount is        Rs. %f", qty * rate * dis / 100);
    printf("\nTotal expense is   Rs. %f", total);
    getch();
    return 0;
}