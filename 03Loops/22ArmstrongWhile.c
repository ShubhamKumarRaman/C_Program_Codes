// Write a program to print out all Armstrong numbers between 1 and 500. If sum of cubes of each digit of the number is equal to the number itself, then the number is called an Armstrong number. For example, 153=(1*1*1)+(5*5*5)+(3*3*3).
#include <stdio.h>
#include <conio.h>
int main()
{
    int num = 1, a, b, c;
    printf("\nArmstrong number between 0 and 500 are:");
    while (num <= 500)
    {
        a = num % 10; // last digit
        b = num % 100;
        b = (b - a) / 10; // Second last digit
        c = num / 100;    // First digit
        if ((a * a * a) + (b * b * b) + (c * c * c) == num)
            printf("\n%d", num);
        num++;
    }
    getch();
    return 0;
}