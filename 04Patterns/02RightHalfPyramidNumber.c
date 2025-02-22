#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    printf("\nEnter number of Lines :");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d  ", j);
        }
        printf("\n");
    }
}