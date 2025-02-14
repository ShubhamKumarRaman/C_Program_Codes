#include <stdio.h>
#include <conio.h>
int main()
{
    int num = 0, a, b, c;
    printf("\nArmstrong number between 0 to 500 are:");
    for (num = 0; num <= 500; num++)
    {
        a = num % 10; // last digit
        b = num % 100;
        b = (b - a) / 10; // Second digit
        c = num / 100;    // first digit
        if ((a * a * a) + (b * b * b) + (c * c * c) == num)
            printf("\n%d", num);
    }
    getch();
    return 0;
}