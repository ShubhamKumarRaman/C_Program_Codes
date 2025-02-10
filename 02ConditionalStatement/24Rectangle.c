// Given the length and breadth of a rectangle, write a program to find whether the are of the rectangle is greater than its perimeter.
#include <stdio.h>
#include <conio.h>
int main()
{
    int length, breadth, area, perimeter;
    printf("\nEnter the length of rectangle:");
    scanf("%d", &length);
    printf("\nEnter the breadth of rectangle:");
    scanf("%d", &breadth);
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    printf("\nArea of rectangle is %d", area);
    printf("\nPerimeter of rectangle is %d", perimeter);
    if (area > perimeter)
        printf("\nArea of rectangle is greater than it's perimeter.");
    else if (perimeter > area)
        printf("\nPerimeter of rectangle is greater than it's area.");
    else
        printf("\nArea and perimeter of rectangle is equal.");
    getch();
    return 0;
}