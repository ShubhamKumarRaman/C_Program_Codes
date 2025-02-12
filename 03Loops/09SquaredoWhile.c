// Print square of 1 to n
#include <stdio.h>
#include <conio.h>
void main()
{
    int n, i = 1;
    printf("\nHow many numbers do you want to print squares: ");
    scanf("%d", &n);
    do
    {
        printf("\nSquare of %d : %d", i, i * i);
        i++;
    } while (i <= n);
    getch();
}