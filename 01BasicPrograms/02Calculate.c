#include <stdio.h> 
#include <conio.h>
void main()
{
    int num1, num2;
    printf("\nEnter 1st number: ");
    scanf("%d", &num1);
    printf("Enter 2nd number: ");
    scanf("%d", &num2);
    printf("\nSum is : %d", (num1 + num2));
    printf("\nDifference is : %d", (num1 - num2));
    printf("\nProduce is : %d", (num1 * num2));
    printf("\nQuotient is : %d", (num1 / num2));
    printf("\nRemainder is : %d", (num1 % num2));
}