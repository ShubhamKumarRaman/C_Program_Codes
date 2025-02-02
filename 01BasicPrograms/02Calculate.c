#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b;
    printf("\nEnter 1st number:");
    scanf("%d", &a);
    printf("\nEnter 2nd number:");
    scanf("%d", &b);

    printf("\nAddition is       : %d", a + b);
    printf("\nSubstraction is   : %d", a - b);
    printf("\nMultiplication is : %d", a * b);
    printf("\nDivision is       : %d", a / b);
    printf("\nReminder is       : %d", a % b);
    getch();
    return 0;
}