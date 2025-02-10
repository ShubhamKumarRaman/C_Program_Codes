// Write a program to find the absolute value of a number entered through the keyboard.
#include <stdio.h>
#include <conio.h>
int main()
{
    int num, abs = 0;
    printf("\nEnter a number:");
    scanf("%d", &num);
    if (num >= 0)
    {
        abs = num;
    }
    if (num < 0)
    {
        abs = (-1) * num;
    }
    printf("\nAbsolute value of %d is %d", num, abs);
    getch();
    return 0;
}