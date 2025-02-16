// Decimal to octal conversion
#include <stdio.h>
#include <conio.h>
int main()
{
    int num, n, oct = 0, rem, k = 1;
    printf("\nEnter a number:");
    scanf("%d", &num);
    n = num;
    do
    {
        rem = n % 8;
        oct = oct + rem * k;
        k = k * 10;
        n = n / 8;
    } while (n != 0);
    printf("\nOctal of %d is %d", num, oct);
    getch();
    return 0;
}