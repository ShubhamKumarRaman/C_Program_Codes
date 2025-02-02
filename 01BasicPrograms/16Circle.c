// Find the area and circumference of a circle
#include <stdio.h>
#include <conio.h>
int main()
{
    float pi = (float)22 / 7;
    float radius, circumference, area;
    printf("\nEnter Radius of the circle:");
    scanf("%f", &radius);
    circumference = 2 * pi * radius;
    area = pi * radius * radius;
    printf("\nArea of the Cicle is %f", area);
    printf("\nCircumference of the circle is %f", circumference);
    getch();
    return 0;
}