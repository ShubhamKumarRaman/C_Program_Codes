// Write a program to check whether a triangle is valid or not, when the three angles of the triangle are entered through the keyboard. A triangle is valid if the sum of all the three angles is equal to 180 degrees.
#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, c, angle;
    printf("\nEnter three angles of a triangle:");
    printf("\nFirst angle:");
    scanf("%d", &a);
    printf("\nSecond angle:");
    scanf("%d", &b);
    printf("\nThird angle:");
    scanf("%d", &c);
    angle = a + b + c;
    if (angle == 180)
        printf("\nTriangle is valid.");
    else
        printf("\nTriangle is not valid.");
    getch();
    return 0;
}