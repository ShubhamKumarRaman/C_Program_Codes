// The current year and the year in which the employee joined the organization are entered through the keyboard. If the nuber of years for which the employee has served the organization is greater than 3, then a bonus of Rs. 2500/- is given to the employee. If the years of service are not greater than 3, then the program should do nothing.
#include <stdio.h>
#include <conio.h>
int main()
{
    int yoj, cy, yos, bonus;
    printf("\nEnter Year of Joining:");
    scanf("%d", &yoj);
    printf("\n Enter Current year:");
    scanf("%d", &cy);
    yos = cy - yoj;
    if (yos > 3)
        printf("\nCongratulation, you have got bonus of Rs. %d", 2500);
    else
        printf("\nYou are not able to get any bonus.");
    getch();
    return 0;
}