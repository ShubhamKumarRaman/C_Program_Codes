// Write a program to display character array with their address.
#include <stdio.h>
void main()
{
    char name[10] = {'A', 'R', 'R', 'A', 'Y'};
    int i = 0;
    printf("\nCharacter memory location\n");
    while (name[i] != '\0')
    {
        printf("\n[%c]\t`[%u]", name[i], &name[i]);
        i++;
    }
}