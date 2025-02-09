// According to the Gregorian calendar, it was Monday on the date 01/01/01. If any year is input through the keyboard write a program to find out what is the day on 1st January of this year.
#include<stdio.h>
#include<conio.h>

void main() {
    int year, day;
    printf("Enter a year: ");
    scanf("%d", &year);

    // Calculate the total number of days from 01/01/01 to the given year
    day = year + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400;

    // Find the day of the week (0 = Monday, 1 = Tuesday, ..., 6 = Sunday)
    day = day % 7;

    // Print the corresponding day of the week
    switch (day) {
        case 0:
            printf("Monday");
            break;
        case 1:
            printf("Tuesday");
            break;
        case 2:
            printf("Wednesday");
            break;
        case 3:
            printf("Thursday");
            break;
        case 4:
            printf("Friday");
            break;
        case 5:
            printf("Saturday");
            break;
        case 6:
            printf("Sunday");
            break;
        default:
            break;
    }

    getch();
}