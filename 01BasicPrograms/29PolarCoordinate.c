// Write a program to receive Cartesian co-ordinates (x,y) of a point and convert them into polar co-ordinates(r,Φ).
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int x, y;
    float r, phi, degree;
    printf("\nEnter cartesian co-ordinates (x,y):");
    scanf("%d %d", &x, &y);
    r = sqrt(x * x + y * y);
    // Calculate the value of Phi
    // For tan inverse we use atan(value)
    phi = atan(y / x);
    printf("\nPolar Co-ordinate of (%d,%d) in radian is (%f,%f)", x, y, r, phi);
    // convert radian into degree
    degree = phi * (180 / 3.14);
    printf("\nPolar Co-ordinate of (%d,%d) in degree is (%f, %f)", x, y, r, degree);
    getch();
    return 0;
}