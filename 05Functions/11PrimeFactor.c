// A positive integer is entered through the keyboard. Write a function to obtain the prime factors of this number.
#include <stdio.h>
#include <conio.h>
void factor(int num);
int main()
{
    int num;
    printf("\nEnter the number:");
    scanf("%d", &num);

    factor(num);
    getch();
    return 0;
}
void factor(int num)
{
    int i = 2;
    printf("\nPrime factor of %d are:", num);
    while (num != 1)
    {
        if (num % i == 0)
        {
            printf(" %d ", i);
        }
        else
        {
            i++;
            continue;
        }
        num = num / i;
    }
}