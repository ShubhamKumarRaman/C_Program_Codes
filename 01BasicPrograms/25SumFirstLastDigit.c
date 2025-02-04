// If a four-digit number is input through the keyboard, write a program to obtain the sum of the first and last digit of this number.
#include <stdio.h>
#include <conio.h>
int main()
{
    int num, a, n;
    int sum = 0;
    printf("\nEnter a four digit number:");
    scanf("%d", &num);

    a = num % 10; // last digit
    n = num / 1000;
    sum = sum + a;

    a = n % 10; // 1st digit
    sum = sum + a;

    printf("\nThe sum of first and last digit of %d is = %d", num, sum);
    getch();
    return 0;
}