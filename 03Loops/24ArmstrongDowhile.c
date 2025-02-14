#include <stdio.h>
#include <conio.h>
int main()
{
    int num = 0, a, b, c;
    printf("\nArmstrong number between 0 to 500 are:");
    do
    {
        a = num % 10;
        b = num % 100;
        b = (b - a) / 10;
        c = num / 100;
        if ((a * a * a) + (b * b * b) + (c * c * c) == num)
            printf("\t%d", num);
        num++;
    } while (num <= 500);
    getch();
    return 0;
}