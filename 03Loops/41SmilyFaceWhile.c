// Write a program to fill the entire screen with a smiling face. The smiling ace has an ASCII value 1.
#include <stdio.h>
#include <conio.h>
int main()
{
    int r = 1, c = 1; // r-row,c-column
    while (r < 10)
    {
        c = 1;
        while (c < 30)
        {
            printf("%c", 1);
            c++;
        }
        printf("\n");
        r++;
    }
    getch();
    return 0;
}