// Find the months and days
#include <stdio.h>
#include <conio.h>
int main()
{
    int month, day, total;
    printf("\nEnter total days: ");
    scanf("%d", &total);
    month = total / 30;
    day = total % 30;
    printf("\nMonth = %d", month);
    printf("\nDays = %d", day);
    getch();
    return 0;
}