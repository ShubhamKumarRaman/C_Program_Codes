// Find the absolute value using abs() function
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int num;
    printf("\nEnter a number :");
    scanf("%d", &num);
    printf("\nAbsolute value of %d is %d", num, abs(num));
    getch();
    return 0;
}