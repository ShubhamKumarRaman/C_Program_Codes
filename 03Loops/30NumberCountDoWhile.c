// Write a program to enter numbers till the user wants. At the end it should display the count of positive, negative and zeros entered.
#include <stdio.h>
#include <conio.h>
int main()
{
    int i = 1, j, num, p, n, z;
    p = n = z = 0;
    printf("\nHow many numbers do you have:");
    scanf("%d", &j);
    do
    {
        printf("\nEnter %d number:", i);
        scanf("%d", &num);
        if (num > 0)
            p++;
        else if (num < 0)
            n++;
        else if (num == 0)
            z++;
        else
            printf("\nInvalid entry!");
        i++;
    } while (i <= j);
    printf("\nPositive number: %d", p);
    printf("\nNegative numbers: %d", n);
    printf("\nZero numbers: %d", z);
    getch();
    return 0;
}