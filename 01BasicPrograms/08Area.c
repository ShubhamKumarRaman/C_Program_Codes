// The length & breadth of a rectangle and radius of a circle are input through the keyboard. Write a program to calculate the area & perimeter of the rectangle and the area & circumference of the circle.
#include <stdio.h>
#include <conio.h>
int main()
{
    printf("\nTo find the area and perimeter of rectangle......");
    float length, breadth, areaR, perimeter;
    float radius, areaC, circum;
    printf("\nEnter the dimension of rectangle....");
    printf("\nLength    :");
    scanf("%f", &length);
    printf("\nBreadth   :");
    scanf("%f", &breadth);

    areaR = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("\nArea of Rectangle is      :%f", areaR);
    printf("\nPerimeter of Rectangle is :%f", perimeter);

    printf("\n-------------------------------------------------------");

    printf("\nTo find the area and circumference of a circle......");
    printf("\nEnter radius of circle    :");
    scanf("%f", &radius);

    areaC = 3.14 * radius * radius;
    circum = 2 * 3.14 * radius;

    printf("\nArea of circle is          : %f", areaC);
    printf("\nCircumference of circle is : %f", circum);
    getch();
    return 0;
}