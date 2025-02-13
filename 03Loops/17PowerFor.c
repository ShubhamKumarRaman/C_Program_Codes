#include <stdio.h>
#include <conio.h>
int main()
{
    int num, power, value = 1;
    printf("\nEnter a number:");
    scanf("%d", &num);
    printf("\nEnter the power:");
    scanf("%d", &power);
    for (int i = 1; i <= power; i++)
    {
        value = value * num;
    }
    printf("\n%d raised to the power %d : %d", num, power, value);
    getch();
    return 0;
}