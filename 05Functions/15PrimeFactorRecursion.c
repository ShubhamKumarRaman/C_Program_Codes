// A positive integer is entered through the keyboard, write a program to obtain the prime factors of the number. Modify the function suitably to obtain the prime factors recursively.
#include <stdio.h>
#include <conio.h>
int primefun(int num);
int prime_recfun(int num);
int main()
{
    int num;
    int prime, prime_rec;
    printf("\nEnter the number:");
    scanf("%d", &num);
    printf("\nPrime factor of %d is :", num);
    prime = primefun(num);
    printf("\nPrime factor of %d using recursive function is :", num);
    prime_rec = prime_recfun(num);
    getch();
    return 0;
}
int prime_recfun(int num)
{
    int x;
    for (x = 2; x <= num; x++)
    {
        if (num % x == 0)
        {
            printf("\t%d", x);
            prime_recfun(num / x);
            break;
        }
    }
}
int primefun(int num)
{
    int x;
start:
    for (x = 2; x <= num; x++)
    {
        if (num % x == 0)
        {
            printf("%d\t", x);
            num = num / x;
            goto start;
        }
    }
}