// Local and Global variable
#include <stdio.h>
#include <conio.h>
int x = 10; // Global variable

int main()
{
    int y = 20; // Local Vaiable
    printf("\nx=%d, y=%d", x, y);
    x = 15;
    printf("\nx=%d", x);
    getch();
    return 0;
}