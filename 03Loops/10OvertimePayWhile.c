// Write a program to calculate overtime pay of 10 employees. Overtime is paid at the rate of Rs. 12.00 per hour for every hour worked above 40 hours. Assume that employees do not work for functional part of an hour.
#include <stdio.h>
#include <conio.h>
int main()
{
    int hour, overtime = 0;
    int count = 1;
    while (count <= 10)
    {
        printf("\n-------------------------------------------");
        printf("\n%d", count);
        printf("\nEnter number of hour worked (Weekly):");
        scanf("%d", &hour);
        if (hour > 40)
        {
            overtime = (hour - 40) * 12;
            printf("\nNumber of hour overtime=%d\n Overtime pay = Rs. %d", hour - 40, overtime);
        }
        else
        {
            printf("\nNumber of hours worked %d is less than 40 hours.\nHence no overtime pay.", hour);
        }
        count++;
    }
    getch();
    return 0;
}