// Find the square root
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int num;
    printf("\nEnter a number:");
    scanf("%d", &num);
    printf("\nSquare root of %d  is %f", num, sqrt(num));
    getch();
    return 0;
}