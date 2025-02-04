// Consider a currency system in which there are notes of seven denominations, namely, Rs. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100. If a sun of Rs. N is entered through the keyboard, write a program to compute the smallest number of notes that will combine to give Rs. N.
#include <stdio.h>
#include <conio.h>
int main()
{
    int amt, temp = 0;
    printf("\nEnter the Amount :Rs. ");
    scanf("%d", &amt);

    temp = amt / 100;
    amt = amt - (temp * 100);
    printf("\nRs.100 Note : %d", temp);

    temp = amt / 50;
    amt = amt - (temp * 50);
    printf("\nRs. 50 note :%d", temp);

    temp = amt / 10;
    amt = amt - (temp * 10);
    printf("\nRs. 10 note :%d", temp);

    temp = amt / 5;
    amt = amt - (temp * 5);
    printf("\nRs. 5 note :%d", temp);

    temp = amt / 2;
    amt = amt - (temp * 2);
    printf("\nRs. 2 note :%d", temp);

    temp = amt / 1;
    printf("\nRs. 1 note :%d", temp);

    getch();
    return 0;
}