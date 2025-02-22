#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    printf("\nEnter number of Lines : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c  ", j + 'A');
        }
        printf("\n");
    }
}