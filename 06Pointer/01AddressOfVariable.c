// Write a program to display the address of the variable.
#include <stdio.h>

int main()
{
    int num;
    printf("\nEnter a number:");
    scanf("%d", &num);
    printf("\nValue of num is %d", num);
    printf("\nAdderss of num is %u", &num);
    return 0;
}