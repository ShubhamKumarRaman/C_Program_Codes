// Differenciate Rupees and Paisa
#include <stdio.h>
#include <conio.h>
int main()
{
    int r, p;
    float amount;
    printf("\nEnter total amount:");
    scanf("%f", &amount);
    r = amount;
    p = (amount - r) * 100;
    printf("\nRupees  : %d", r);
    printf("\nPaisa   : %d", p);
    getch();
    return 0;
}