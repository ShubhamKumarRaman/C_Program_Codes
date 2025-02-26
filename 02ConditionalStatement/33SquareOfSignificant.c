// Write a program to calculate the square of those numbers only whose least significant digit is 5.
#include <stdio.h>
int main()
{
    int num, s;
    printf("\nEnter a number:");
    scanf("%d", &num);
    s = num % 10; // To check least significant digit is 5.
    if (s == 5)
    {
        num = num / 10;
        printf("\nSquare = %d%d", num * num++, s * s);
    }
    else
        printf("\nInvalid number.");
    return 0;
}