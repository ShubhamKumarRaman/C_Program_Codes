// Write a program to generate all combinations of 1,2 and 3 using for loop.
#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j, k;
    printf("\nAll combinations of 1,2and3 are:");
    i = 1;
    do
    {
        j = 1;
        do
        {
            k = 1;
            do
            {
                printf("%d%d%d\t", i, j, k);
                k++;
            } while (k <= 3);
            j++;
        } while (j <= 3);
        i++;
    } while (i <= 3);
    getch();
    return 0;
}