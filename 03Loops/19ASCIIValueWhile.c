// Write a program to print all the ASCII values and their equivalent characters using a while loop. The ASCII values vary from 0 to 255.
#include <stdio.h>
#include <conio.h>
int main()
{
    int i = 1;
    char ascii;
    while (i <= 255)
    {
        printf("\n%d=%c", i, i);
        i++;
    }
    getch();
    return 0;
}