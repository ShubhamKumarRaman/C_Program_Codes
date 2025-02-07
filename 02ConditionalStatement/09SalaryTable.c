// Write a program to calculate the salary as per the following table:
#include <stdio.h>
#include <conio.h>
int main()
{
    char gender, qual;
    int yos, salary = 0;
    printf("\nEnter your Gender (M/F):");
    scanf("%c", &gender);
    printf("\nEnter years of service:");
    scanf("%d", &yos);
    printf("\nEnter your Qualification (G-Graduate,P-Post-Graduate):");
    fflush(stdin);
    scanf("%c", &qual);

    if (gender == 'M' && yos >= 10 && qual == 'P')
        salary = 15000;
    else if (gender == 'M' && yos >= 10 && qual == 'G')
        salary = 10000;
    else if (gender == 'M' && yos < 10 && qual == 'P')
        salary = 10000;
    else if (gender = 'M' && yos < 10 && qual == 'G')
        salary = 7000;
    else if (gender == 'F' && yos >= 10 && qual == 'P')
        salary = 12000;
    else if (gender == 'F' && yos >= 10 && qual == 'G')
        salary = 9000;
    else if (gender == 'F' && yos < 10 && qual == 'P')
        salary = 10000;
    else if (gender == 'F' && yos < 10 && qual == 'G')
        salary = 6000;
    else 
        printf("\nInvalid input");

    printf("\nSalary of Employee is %d", salary);
    getch();
    return 0;
}