#include <stdio.h>
#include <conio.h>
int main()
{
    int i = 0;
    do
    {
        printf("\n%d  =  %c", i, i);
        i++;
    } while (i <= 255);
    getch();
    return 0;
}