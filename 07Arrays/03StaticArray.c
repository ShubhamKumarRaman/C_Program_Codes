// Write a program to iinitalize the static array and display its elements.
#include <stdio.h>
void main()
{
    int num[5] = {0};
    for (int i = 0; i < 5; i++)
    {
        printf("\nnum[%d]=%d", i, num[i]);
    }
}