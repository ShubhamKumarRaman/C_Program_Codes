// Write a c program to add first seven terms of the following series using a for loop:
// 1/1! + 2+2! +...........
#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j;
    float fact;
    float sum = 0.0;
    i = 1;
    while (i <= 7)
    {
        fact = 1, j = 1;
        while (j <= i)
        {
            fact = fact * j;
            j++;
        }
        sum = sum + i / fact;
        i++;
    }
    printf("\nSum is %f", sum);
    getch();
    return 0;
}