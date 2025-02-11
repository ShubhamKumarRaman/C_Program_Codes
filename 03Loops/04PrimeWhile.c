// Write a progam to determine whether a number is prime or not. A prime number is one, which is divisible only by 1 or itself.
#include <stdio.h>
void main()
{
    int num;
    int i = 2;
    printf("\nEnter a number: ");
    scanf("%d", &num);
    while (i < num)
    {
        if (num % i == 0)
        {
            printf("Not a prime Number");
            return;
        }
        i++;
    }
    printf("Prime Number");
}