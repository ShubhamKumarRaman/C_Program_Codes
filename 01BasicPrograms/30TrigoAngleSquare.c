// Write a program to receive value of an angle is degrees and check whether sum of squares of sine and cosine of this angle is equal to 1.
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int degree, result;
    printf("\nEnter the angle (in degree):");
    scanf("%d", &degree);
    result = pow(sin(degree), 2) + pow(cos(degree), 2);
    printf("\nResult is %d", result);
    getch();
    return 0;
}