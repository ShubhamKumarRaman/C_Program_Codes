// Find the volume and surface are of cube
#include <stdio.h>
#include <conio.h>
int main()
{
    float side, area, volume;
    printf("\nEnter side of the square:");
    scanf("%f", &side);
    area = 6 * side * side;
    volume = side * side * side;
    printf("\nSurfacearea is :%.2f", area);
    printf("\nVolume is      :%.2f", volume);
    getch();
    return 0;
}