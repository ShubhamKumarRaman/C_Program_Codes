#include <stdio.h>
#include <conio.h>
int main()
{
    int i = 0;
    for (i = 0; i <= 255; i++)
    {
        printf("\n%d  =  %c", i, i);
    }
    getch();
    return 0;
}