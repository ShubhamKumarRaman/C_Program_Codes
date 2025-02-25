// Write a recursive function to obtain the first 25 number of a Fibonacci sequence. In a Fibonacci sequence the sum of two successive terms gives the third term. Following are the first few terms of the Fibonacci sequence:
// 1 1 2 3 5 8 13 21 34 55 89
#include <stdio.h>
#include <conio.h>
int main()
{
    int num;
    int a = 0, b = 1, c;
    printf("\nEnter number of terms:");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        printf("  %d", a);
        c = a + b;
        a = b;
        b = c;
    }
    getch();
    return 0;
}