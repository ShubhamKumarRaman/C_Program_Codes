// Write a program to display the address of different variables together with their values.
#include <stdio.h>

int main()
{
    char c;
    int i;
    float f;
    printf("\nEnter a chracter:");
    scanf("%c", &c);
    printf("\nEnter an integer vaue:");
    scanf("%d", &i);
    printf("\nEnter a float value:");
    scanf("%f", &f);
    printf("\nValue   Address");
    printf("\nThe value of c is %c , Address = %u", c, &c);
    printf("\nThe value of i is %d , Address = %u", i, &i);
    printf("\nThe value of f is %f , Address = %u", f, &f);
    return 0;
}