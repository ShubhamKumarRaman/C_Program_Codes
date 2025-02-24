// Write a general-purpose function to convert any given year into roman equivalent. Use these roman equivalents for decimal numbers: 1-I, 5-V, 10-X, 50-L, 100-C, 500-D, 1000-M.
// Example:
// Roman equivalent of 1988 is MDCCCCLXXXVIII
// Roman equivalent of 1525 is MDXXV
#include <stdio.h>
#include <conio.h>
int roman(int y, int k, char ch);
int main()
{
    int year;
    printf("\nEnter a year:");
    scanf("%d", &year);
    year = roman(year, 1000, 'M');
    year = roman(year, 500, 'D');
    year = roman(year, 100, 'C');
    year = roman(year, 50, 'L');
    year = roman(year, 10, 'X');
    year = roman(year, 5, 'V');
    year = roman(year, 1, 'I');
    getch();
    return 0;
}
int roman(int y, int k, char ch)
{
    int i, j;
    if (y == 9)
    {
        printf("IX");
        return (y % 9);
    }
    if (y == 4)
    {
        printf("IV");
        return (y % 4);
    }
    j = y / k;
    for (i = 1; i <= j; i++)
    {
        printf("%c", ch);
    }
    return (y - k * j);
}