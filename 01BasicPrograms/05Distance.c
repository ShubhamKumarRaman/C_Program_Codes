// The distance between two cities (in KM.) is input through the keyboard. Write a program to convert and print this distance in meters, feet, inches and centimeters.
#include <stdio.h>
#include <conio.h>
int main()
{
    printf("\nTo convert the distance into different units......");
    float km, m, cm, mm, inch, feet;
    printf("\nEnter the distance(in KM) : ");
    scanf("%f", &km);

    m = km * 1000;
    cm = m * 100;
    mm = cm * 10;
    inch = cm / 2.54;
    feet = inch / 12;

    printf("\nConversion is ----------------");
    printf("\nMeter         :%d", (int)m);
    printf("\nCentimeter    :%d", (int)cm);
    printf("\nMilimeter     :%d", (int)mm);
    printf("\nfeet          :%f", feet);
    printf("\ninch          :%f", inch);
    getch();
    return 0;
}