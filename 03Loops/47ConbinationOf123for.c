// Write a program to generate all combinations of 1,2 and 3 using for loop.
#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j, k;
    printf("\nAll combinations are:");
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            for (k = 1; k <= 3; k++)
            {
                printf("%d%d%d\t", i, j, k);
            }
        }
    }
    getch();
    return 0;
}