#include <stdio.h>
#include <conio.h>
int main()
{
    int hour, overtime = 0, amount = 0;
    int count = 1, n;
    printf("\nHow many Employee do you have?: ");
    scanf("%d", &n);
    do
    {
        printf("\n-------------------------------------------");
        printf("\n%d", count);
        printf("\nEnter number of hours worked:");
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
        amount += overtime;
        count++;
    } while (count <= n);
    printf("\n\nTotal Overtime paid : Rs. %d", amount);
    getch();
    return 0;
}