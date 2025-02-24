// Write a functino to calculate the factorial value of any integer entered through the keyboard.
#include <stdio.h>
#include <conio.h>
long factorial(int x);
int main()
{
    int num;
    long fact;
    printf("\nEnter the number:");
    scanf("%d", &num);
    fact = factorial(num);
    printf("\nFactorial of %d is %ld", num, fact);
    getch();
    return 0;
}
long factorial(int x)
{
    int i;
    long factorial = 1;
    for (i = 1; i <= x; i++)
    {
        factorial = factorial * i;
    }
    return (factorial);
}