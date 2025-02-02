// Substract two numbers without using substraction
#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, sub;
    printf("\nEnter 1st number:");
    scanf("%d", &a);
    printf("\nEnter 2nd number:");
    scanf("%d", &b);

    sub = a + (~b + 1); //By using ~(Tilled)operator we find 1s compliment of b 
    //Our system deals as 2s complement with negative number so ~b+1 denotes -b 
    printf("\nSubstraction is %d", sub);
    getch();
    return 0;
}