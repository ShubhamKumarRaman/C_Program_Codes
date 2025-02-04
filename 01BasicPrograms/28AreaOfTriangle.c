// If lengths of three sides of a triangle are input through the keyboard, write a program to find the are of the triangle.
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int a, b, c;
    float s = 0, area = 0;
    printf("\nEnter length of three sides of a triangle.");
    printf("\nEnter length of AB = ");
    scanf("%d", &a);
    printf("\nEnter length of BC = ");
    scanf("%d", &b);
    printf("\nEnter length of AC = ");
    scanf("%d", &c);
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("\nArea of the triangle is : %f", area);
    getch();
    return 0;
}