// Two numbers are entered through the keyboard. Write a program to find the value of one number raised to the power of another.
#include <stdio.h>
#include <conio.h>
int main()
{
    int num, power, value = 1;
    printf("\nEnter a number:");
    scanf("%d", &num);
    printf("\nEnter the power:");
    scanf("%d", &power);
    int i = 1;
    while (i <= power)
    {
        value = value * num;
        i++;
    }
    printf("\n%d raised to the power %d : %d", num, power, value);
    getch();
    return 0;
}