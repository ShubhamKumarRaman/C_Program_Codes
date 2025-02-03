// Swapping of two number without third variable
#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b;
    printf("\nEnter 1st number:");
    scanf("%d", &a);
    printf("\nEnter 2nd number:");
    scanf("%d", &b);
    printf("\nBefore swapping:: a=%d, b=%d", a, b);

    a = a + b;
    b = a - b;
    a = a - b;
    // a=a+b-(b=a); // (Directly Method)
    printf("\nAfter swapping:: a=%d, b=%d", a, b);
    getch();
    return 0;
}