// Write a program to find the factorial value of any number entered through the keyboard.
#include <stdio.h>
#include <conio.h>
int main()
{
    int num, fact = 1;
    int i = 1;
    printf("\nEnter a number:");
    scanf("%d", &num);
    while (i <= num)
    {
        fact = fact * i;
        i++;
    }
    printf("\nFactorial of %d = %d", num, fact);
    getch();
    return 0;
}