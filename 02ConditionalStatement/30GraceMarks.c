// Write a c program to find the grace marks for a student using switch. The user should enter the class obtained by the student and the number of students he has failed in. Use the following logic:

// If the student gets first class and the number of subjects he failed in is greater than 3, then he does not get any grace. Otherwise the grace is of 5 marks per subject.
// If the student gets second class and the number of subjects he failed in is greater than 2, then he does not get any grace. Otherwise the grace is of 4 marks per subject.
// If the student gets third class and the number of subjects he failed in is greater than 1, then he does not get any grace. Otherwise the grace is of 5 marks.
#include <stdio.h>
#include <conio.h>
int main()
{
    int div, sub;
    printf("\nEnter the class obtained by the student:");
    scanf("%d", &div);
    printf("\nEnter the number of subject in which he has failed:");
    scanf("%d", &sub);

    switch (div)
    {
    // for first class student
    case 1:
    {
        if (sub <= 3)
            printf("\nThe student got the grace of %d marks.", sub * 5);
        else
            printf("\nThe student didn't get any grace.");
        break;
    }
    // For second class student
    case 2:
    {
        if (sub <= 2)
            printf("\nThe student got the grace of %d marks.", sub * 4);
        else
            printf("\nThe student didn't get any grace.");
        break;
    }
    // For third class student
    case 3:
    {
        if (sub <= 1)
            printf("\nThe student got the grace of %d marks.", sub * 5);
        else
            printf("\nThe student didn't get any grace.");
        break;
    }
    default:
    {
        printf("\nInvalid Entry.");
    }
    }
    getch();
    return 0;
}