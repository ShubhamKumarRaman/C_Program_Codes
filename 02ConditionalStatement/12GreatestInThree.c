// Find the greatest number from three numbers
#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, c, max;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    printf("Enter 3rd number: ");
    scanf("%d", &c);

    max = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
    printf("The greatest number is %d", max);
    return 0;
}