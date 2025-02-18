// Write a c program to add first seven terms of the following series using a for loop:
// 1/1! + 2+2! +...........
#include <stdio.h>
#include <conio.h>
int main()
{
    float i, j;
    float fact;
    float sum = 0;
    for (i = 1; i <= 7; i++)
    {
        fact = 1;
        for (j = 1; j <= i; j++)
        {
            fact = fact * j;
        }
        sum = sum + i / fact;
    }
    printf("\nSum is %f", sum);
    getch();
    return 0;
}