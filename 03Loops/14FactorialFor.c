// Find the factorial using for loop
#include <stdio.h>
#include <conio.h>
int main()
{
    int num, fact = 1;
    printf("\nEnter a number:");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("\nFactorial of %d = %d", num, fact);
    getch();
    return 0;
}