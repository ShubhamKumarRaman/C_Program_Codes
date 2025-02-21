#include <stdio.h>
#include <conio.h>
void main()
{
    float length, breadth, area, perimeter;
    printf("\nEnter Length of rectangle: ");
    scanf("%f", &length);
    printf("Enter breadth of rectanble: ");
    scanf("%f", &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("\nArea  :%.2f", area);
    printf("\nPerimeter :%.2f", perimeter);
}