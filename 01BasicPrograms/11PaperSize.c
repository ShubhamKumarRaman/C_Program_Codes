// Paper of size A0 has dimensions 1189mm x 841mm. Each subseent size A(n) is defined as A(n-1) cut in half parallel to its shorter sides. Write a program to calculate and print paper sizes A0,A1,A2,......,A8.
#include <stdio.h>
#include <conio.h>
int main()
{
    int l = 1189, b = 841;

    printf("\nDimension of A0 size paper : %d mm x %d mm", l, b);
    printf("\nDimension of A1 size paper : %d mm x %d mm", b, l / 2);
    printf("\nDimension of A2 size paper : %d mm x %d mm", l / 2, b / 2);
    printf("\nDimension of A3 size paper : %d mm x %d mm", b / 2, l / 4);
    printf("\nDimension of A4 size paper : %d mm x %d mm", l / 4, b / 4);
    printf("\nDimension of A5 size paper : %d mm x %d mm", b / 4, l / 8);
    printf("\nDimension of A6 size paper : %d mm x %d mm", l / 8, b / 8);
    printf("\nDimension of A7 size paper : %d mm x %d mm", b / 8, l / 16);
    printf("\nDimension of A8 size paper : %d mm x %d mm", l / 16, b / 16);

    getch();
    return 0;
}