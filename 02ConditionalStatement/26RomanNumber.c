// To convert roman number to number system.
#include <stdio.h>
#include <conio.h>
int main()
{
    char c;
    printf("\nEnter roman number:");
    scanf("%c", &c);
    switch (c)
    {
    case 'i':
    case 'I':
        printf("\nThe value is 1");
        break;
    case 'v':
    case 'V':
        printf("\nThe value is 5");
        break;
    case 'x':
    case 'X':
        printf("\nThe value is 10");
        break;
    case 'l':
    case 'L':
        printf("\nThe value is 50");
        break;
    case 'c':
    case 'C':
        printf("\nThe value is 100");
        break;
    case 'd':
    case 'D':
        printf("\nThe value is 500");
        break;
    case 'm':
    case 'M':
        printf("\nThe value is 1000");
        break;
    default:
        printf("\nInvalid Input");
    }
    getch();
    return 0;
}