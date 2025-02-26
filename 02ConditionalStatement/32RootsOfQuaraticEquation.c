// Write a program to find the roots of a quadratic equation by using if-else condition.
// a(x)sq+bx+c=0 
// add -lm at compile time
#include <stdio.h>
#include "math.h"

int main()
{
    float a, b, c;
    float x1, x2;
    printf("\nEnter value for a,b,c:");
    scanf("%f %f %f", &a, &b, &c);
    if (b * b > 4 * a * c)
    {
        x1 = -b + sqrt((b * b) - (4 * a * c)) / 2 * a;
        x2 = -b - sqrt((b * b) - (4 * a * c)) / 2 * a;
        printf("\nX1=%f, X2=%f", x1, x2);
    }
    else
    {
        printf("\nRoots are Imaginary");
    }
    return 0;
}