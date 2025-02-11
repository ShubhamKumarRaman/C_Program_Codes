#include <stdio.h>
#include <conio.h>
void main()
{
    int num;
    int i = 2;
    printf("\nEnter a number: ");
    scanf("%d", &num);
    do
    {
        if (num % i == 0)
        {
            printf("\nNot a prime Number.");
            return;
        }
        i++;
    } while (i < num);
    printf("\nPrime Number.");
}