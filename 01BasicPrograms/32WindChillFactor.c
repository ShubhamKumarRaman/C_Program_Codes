// Wind chill factor is the felt air temperature on exposed skin due to wind. The wind chill temperature is always lower than the air temperature, and is calculated as per the following formula:
// Wcf=35.74+0.6215t+(0.4275t-35.75)*v0.16
// Write a program to receive values of temperature and wind velocity and calculate wind chill factor.
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    float temp, wind, wcf;
    // Input temperature in fahrenheit
    printf("\nEnter temperature in Fahrenheit:-");
    scanf("%f", &temp);
    // input wind velocity (speed) in miles per hours (mph)
    printf("\nEnter wind speed in mph:-");
    scanf("%f", &wind);
    wcf = 35.74 + ((0.6215 * temp) - 35.75) * pow(wind, 0.16);
    printf("\nWind chill factor is : %f", wcf);
    getch();
    return 0;
}