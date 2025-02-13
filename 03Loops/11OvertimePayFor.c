#include <stdio.h>
#include <conio.h>
int main()
{
    int hour, overtime,n;
    
    printf("How many Employee Do you have? :");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("\n-------------------------------------------");
        printf("\n%d", i);
        printf("\nEnter Number of hours worked:");
        scanf("%d", &hour);
        if (hour > 40)
        {
            overtime = (hour - 40) * 12;
            printf("\nNumber of hours overtime worked is %d \nOvertime pay = Rs. %d", hour - 40, overtime);
        }
        else
        {
            overtime = 0;
            printf("\nNumber of hours %d is less than 40 hours\nHence no overtime pay.", hour);
        }
    }
    getch();
    return 0;
}