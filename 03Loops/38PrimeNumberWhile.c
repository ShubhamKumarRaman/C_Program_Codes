// Write a program to print all prime numbers from 1 to 300. (Hint: Use nested loops, break and continue)
#include <stdio.h>
#include <conio.h>
int main()
{
    int i, n = 1;
    printf("\nPrime numbers between 1 & 300 are:");
    while (n <= 300)
    {
        i = 2;
        while (i < n)
        {
            if (n % i == 0)
                break;
            else
                i++;
        }
        if (i == n)
            printf("%d\t", n);
        n++;
    }
    getch();
    return 0;
}