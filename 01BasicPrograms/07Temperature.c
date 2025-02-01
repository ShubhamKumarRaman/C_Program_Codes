// Temperature of a city in Fahrenheit degrees is input through the keyboard. Write a program to convert this temperature into Centigrade degree.
#include <stdio.h>
#include <conio.h>
int main()
{
    printf("\nConversion of temperature...........");
    float C, F;
    printf("\nEnter the temperature (in Fahrenheit): ");
    scanf("%f", &F);

    C = 5.0 / 9.0 * (F - 32);

    printf("\nTemperature in Centigrade is : %f", C);
    getch();
    return 0;
}