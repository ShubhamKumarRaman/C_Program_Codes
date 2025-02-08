// Find the greater number by using ternary operators
#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, max;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    max = (a > b) ? a : b;
    printf("The greater number is %d", max);
    return 0;
}