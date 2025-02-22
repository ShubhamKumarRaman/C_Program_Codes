#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    printf("\nEnter number of lines: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2 * (n - i - 1); j++)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("%c ", k + 'A');
        }
        printf("\n");
    }
}