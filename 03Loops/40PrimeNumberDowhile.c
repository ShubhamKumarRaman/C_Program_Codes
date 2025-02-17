// To print prime numbers between 1 to entered number
#include <stdio.h>
#include <conio.h>
int main()
{
    int i = 1, j, n;
    printf("\nEnter the number:");
    scanf("%d", &n);
    do
    {
        j = 2;
        do
        {
            if (i % j == 0)
                break;
            else
                j++;
        } while (j < i);
        if (i == j)
            printf("%d\t", i);
        i++;
    } while (i < n);
    getch();
    return 0;
}