// Paper of size A0 has dimensions 1189mm x 841mm. Each subseent size A(n) is defined as A(n-1) cut in half parallel to its shorter sides. Write a program to calculate and print paper sizes A0,A1,A2,......,A8.
#include <stdio.h>
#include <conio.h>
int main()
{
    int l, b, t;
    l = 1189, b = 841;
    for (int i = 0; i <= 8; i++)
    {
        printf("\nDimension of A%d size paper is : %d mm x %d mm", i, l, b);
        t = l;
        l = b;
        b = t / 2;
    }
    getch();
    return 0;
}