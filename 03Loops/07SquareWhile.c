// Execution of a loop an unknown number of times
#include <stdio.h>
#include <conio.h>
void main()
{
    int i = 0;
    int num;
    char choice;
    while (1)
    {
        printf("\nEnter a number: ");
        scanf("%d", &num);
        printf("\nSquare of %d is %d", num, num * num);
        printf("\n---------------------------------------------");
        printf("\nDo you want to continue (y/n) : ");
        scanf(" %c", &choice);
        if (choice != 'y')
        {
            break;
        }
    }
}