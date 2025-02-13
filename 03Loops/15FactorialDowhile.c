// To find the factorial using do while loop
#include <stdio.h>
#include <conio.h>
int main()
{
    int num, fact = 1;
    int i = 1;
    printf("\nEnter a number:");
    scanf("%d", &num);
    do
    {
        fact = fact * i;
        i++;
    } while (i <= num);
    printf("\nFactorial of %d = %d", num, fact);
    getch();
    return 0;
}