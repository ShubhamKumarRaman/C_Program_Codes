// To print smiling face on the full screen in matrix form.
#include <stdio.h>
#include <conio.h>
int main()
{
    int r, c, i, j;
    printf("\nEnter nuber of rows:");
    scanf("%d", &r);
    printf("\nEnter number of columns:");
    scanf("%d", &c);
    i = 1;
    do
    {
        j = 1;
        do
        {
            printf("%c", 1);
            j++;
        } while (j <= c);
        printf("\n");
        i++;
    } while (i <= r);
}