// If a five-digit number is input through the keyboard, write a program to reverse the number.
#include <stdio.h>
#include <conio.h>
int main()
{
    int num, a, n;
    long int revnum = 0;

    printf("\nEnter a five digit number:");
    scanf("%d", &num);

    a = num % 10; // Last digit
    n = num / 10; // remain digit
    revnum = revnum + a * 10000L;

    a = n % 10; // 4th digit
    n = n / 10; // remain digit
    revnum = revnum + a * 1000;

    a = n % 10; // 3rd digit
    n = n / 10; // remain digit
    revnum = revnum + a * 100;

    a = n % 10; // 2nd digit
    n = n / 10; // remain digit
    revnum = revnum + a * 10;

    a = n % 10;
    revnum = revnum + a;

    printf("\nReverse number is %ld", revnum);
    getch();
    return 0;
}