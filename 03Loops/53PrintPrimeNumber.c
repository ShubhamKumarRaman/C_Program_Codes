// Print prime numbers 1 to n
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool isPrime(int num)
{
    if (num == 1 || num == 0)
    {
        return false;
    }

    // Check Prime or not
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
void main()
{
    int n;
    printf("\nEnter a number : ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            printf("%d\t", i);
        }
    }
}