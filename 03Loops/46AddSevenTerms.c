// Write a c program to add first seven terms of the following series using a for loop:
// 1/1! + 2+2! +...........
#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j;
    int n;
    float fact;
    float sum = 0;
    printf("\nEnter number of terms:");
    scanf("%d", &n);
    i = 1;
    do
    {
        fact = 1, j = 1;
        do
        {
            fact = fact * j;
            j++;
        } while (j <= i);
        sum = sum + i / fact;
        i++;
    } while (i <= n);
    printf("\nSum is %f", sum);
    getch();
    return 0;
}