// If a five-digit number is input through the keyboard, write a program to calculate the sum of its digits. (Hint: Use the modulus operator %).
#include <stdio.h>
#include <conio.h>
int main()
{
    int num, n, a;
    int sum = 0;
    printf("\nEnter a five digit number:");
    scanf("%d", &num);

    a = num % 10; // Last digit
    n = num / 10; // remain digit
    sum = sum + a;

    a = n % 10; // 4th digit
    n = n / 10; // remain digit
    sum = sum + a;

    a = n % 10; // 3rd digit
    n = n / 10; // remain digit
    sum = sum + a;

    a = n % 10; // 2nd digit
    n = n / 10; // remain digit
    sum = sum + a;

    a = n % 10; // 1st digit
    sum = sum + a;

    printf("\nSum of digit is %d", sum);
    getch();
    return 0;
}