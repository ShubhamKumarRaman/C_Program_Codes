// To print smiling face on the full screen in matrix form.
#include <stdio.h>
#include <conio.h>
int main()
{
    int r, c, i, j;
    printf("\nEnter number of rows:");
    scanf("%d", &r);
    printf("\nEnter number of column:");
    scanf("%d", &c);
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            printf("%c", 1);
        }
        printf("\n");
    }
    getch();
    return 0;
}