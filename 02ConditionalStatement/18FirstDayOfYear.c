// To calculate the first day of the year
#include <stdio.h>
#include <conio.h>
int main()
{
    int leapdays, firstday, year;
    long int normaldays, totaldays;
    printf("\nEnter year:");
    scanf("%d", &year);
    normaldays = (year - 1) * 365;
    leapdays = (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400;
    totaldays = normaldays + leapdays;
    firstday = totaldays % 7;
    if (firstday == 0)
        printf("\nMonday");
    else if (firstday == 1)
        printf("\nTuesday");
    else if (firstday == 2)
        printf("\nWednesday");
    else if (firstday == 3)
        printf("\nThrusday");
    else if (firstday == 4)
        printf("\nFriday");
    else if (firstday == 5)
        printf("\nSaturday");
    else if (firstday == 6)
        printf("\nSunday");
    else
        printf("\nWrong Entry");
    getch();
    return 0;
}