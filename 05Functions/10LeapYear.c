// Any year is entered through the keyboard. Write a function to determine whether the year is a leap year or not.
#include <stdio.h>
#include <conio.h>
void leapyear(int year);
int main()
{
    int year;
    printf("\nEnter the year:");
    scanf("%d", &year);
    leapyear(year);
    getch();
    return 0;
}
void leapyear(int year)
{
    if ((year % 400 == 0) || (year % 100 != 0 && year % 4 == 0))
        printf("\nLeap year");
    else
        printf("\nNot a leap year.");
}