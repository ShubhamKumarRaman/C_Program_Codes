// Any year is input through the keyboard. Write a program to determine whether the year is a leap year or not.
#include <stdio.h>
#include <conio.h>
void main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if ((year % 400 == 0) || (year % 100 != 0 && year % 4 == 0))
    {
        printf("%d is a leap year", year);
    }
    else
    {
        printf("%d is not a leap year", year);
    }
    getch();
}