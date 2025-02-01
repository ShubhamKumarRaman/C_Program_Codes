// Ramesh's Basic salary is input through the keyboard. His dearness allowance is 40% of basic salary, and house rent allowance is 20% of basic salary. Write a program to calculate his gross salary.
#include <stdio.h>
#include <conio.h>
int main()
{
    printf("\nTo find the gross salary of an employee......");
    float bp, da, hra, grpay;
    printf("\nEnter Basic pay   :Rs. ");
    scanf("%f", &bp);

    da = bp * 40 / 100;
    hra = bp * 20 / 100;
    grpay = bp + da + hra;

    printf("\n-----------------------------------");
    printf("\nBasic salary is           :Rs. %.2f", bp);
    printf("\nDearness allowanc is      :Rs. %.2f", da);
    printf("\nHouse rent allowance is   :Rs. %.2f", hra);
    printf("\n---------------------------------------");
    printf("\nGross salary is           :Rs. %.2f", grpay);
    getch();
    return 0;
}