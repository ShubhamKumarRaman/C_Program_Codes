// To number are input through the keyboard into two locations C and D. Write a program to interchange the contents of C and D.
#include <stdio.h>
#include <conio.h>
int main()
{
    printf("\nTo interchange of contents of two variables....");
    int c, d, temp;

    printf("\nEnter number at location C:");
    scanf("%d", &c);
    printf("\nEnter number at location D:");
    scanf("%d", &d);

    temp = c;
    c = d;
    d = temp;

    printf("\nAfter interchange ......");
    printf("\nNew number at location C = %d", c);
    printf("\nNew number at location D = %d", d);
    getch();
    return 0;
}