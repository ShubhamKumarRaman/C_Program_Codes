// Write a funciton power(a,b), to calculate the value of a rised to b.
#include <stdio.h>
#include <conio.h>
long power(int x, int y);
int main()
{
    int num, pow;
    long result;
    printf("\nEnter the number:");
    scanf("%d", &num);
    printf("\nEnter the power:");
    scanf("%d", &pow);
    result = power(num, pow);
    printf("\n%d to the power %d is %ld", num, pow, result);
    getch();
    return 0;
}
long power(int x, int y)
{
    int i;
    long result = 1;
    for (i = 1; i <= y; i++)
    {
        result = result * x;
    }
    return result;
}