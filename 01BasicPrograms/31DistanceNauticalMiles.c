// write a program to receive values of latitude and longitude, in degrees, of two places on the earth and outputs the distance between them in nautical miles. The formula for distance in nautical miles is : D= 3963 cos-1 (sin L1 sin L2 + cos L1 cos L2* cos(G2-G1))
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    float L1, L2, G1, G2, distance;
    const float PI = 22.0 / 7;
    // input two points (place) location (latitude and longitude) in degree form
    printf("\nEnter co-ordinate of first place(in degree):");
    scanf("%f %f", &L1, &G1);
    printf("\nEnter co-ordinate of second place(in degree):");
    scanf("%f %f", &L2, &G2);
    // Convert degree into radian
    L1 = L1 * (PI / 180);
    L2 = L2 * (PI / 180);
    G1 = G1 * (PI / 180);
    G2 = G2 * (PI / 180);
    distance = 3963 * (acos(sin(L1) * sin(L2) + cos(L1) * cos(L2) * (cos(G2 - G1))));
    printf("\ndistance in Nautical miles is %f", distance);
    getch();
    return 0;
}