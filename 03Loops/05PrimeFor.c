#include <stdio.h>
#include <conio.h>
void main()
{
    int num;
    printf("\nEnter a number: ");
    scanf("%d", &num);
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            printf("\nPrime Number.");
            return;
        }
    }
    printf("\nNot a prime number.");
}