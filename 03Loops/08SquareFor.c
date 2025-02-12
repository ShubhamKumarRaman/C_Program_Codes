// Execution of a loop an unknown number of times
#include <stdio.h>
#include <conio.h>
void main()
{
    int n, num;
    printf("\nHow many times do you want to print squares: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter a number  : ");
        scanf("%d", &num);
        printf("Square of %d    : %d", num, num * num);
        printf("\n-------------------------------------\n");
    }
}