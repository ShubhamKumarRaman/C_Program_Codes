// Find the area and circumference of circle using pointer and function
#include <stdio.h>
#include <conio.h>
void areaperi(int, float *, float *);
int main()
{
    int radius;
    float area, circum;
    printf("\nEnter radius of the circle:");
    scanf("%d", &radius);
    areaperi(radius, &area, &circum);
    printf("\nArea is %.2f", area);
    printf("\nCircumference is %.2f", circum);
    getch();
    return 0;
}
void areaperi(int r, float *a, float *c)
{
    *a = 3.14 * r * r;
    *c = 2 * 3.14 * r;
}