// To print prime numbers between 1 to entered digit
#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j, n;
    printf("\nEnter the number:");
    scanf("%d", &n);
    printf("\nPrime numbers between 1 to %d are:", n);
    for (i = 1; i < n; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
                break;
        }
        if (i == j)
            printf("%d\t", i);
    }
    getch();
    return 0;
}