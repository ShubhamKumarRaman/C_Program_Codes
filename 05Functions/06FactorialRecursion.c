//Find the factorial using Recursion
#include<stdio.h>
#include<conio.h>
int factorial(int i);
int main()
{
    int num, fact;
    printf("\nEnter a number:");
    scanf("%d", & num);

    fact=factorial(num);
    printf("\nFactorial value = %d", fact);
    getch();
    return 0;
}
int factorial(int i)
{
    int f;
    if(i==1)
        return 1;
    else
        f=i*factorial(i-1);
    return f;
}