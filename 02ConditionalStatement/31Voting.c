// Write a program to check whether the candidate's age is greater than 17 or not. If yes, display message 'Eligible for voting'.
#include <stdio.h>
void main()
{
    int age;
    printf("\nEnter your age:");
    scanf("%d", &age);
    if (age > 17)
    {
        printf("\nEligible for voting.");
    }
    else
    {
        printf("\nNot eligible for voting.");
    }
}