// The marks obtained by a student in 5 different subjects are input through the keyboard. The student gets a division as per the following rules:
/*
Percentage above or equal to 60 - First Division
Percentage between 50 and 59 - Second Division
Percentage between 40 and 49 - Third Division
Percentage Less than 40 - Fail*/
#include <stdio.h>
#include <conio.h>
int main()
{
    int m1, m2, m3, m4, m5, total;
    float per;
    printf("\nEnter Marks obtained in 5 subjects....");
    printf("\nSubject 1: ");
    scanf("%d", &m1);
    printf("\nSubject 2: ");
    scanf("%d", &m2);
    printf("\nSubject 3: ");
    scanf("%d", &m3);
    printf("\nSubject 4: ");
    scanf("%d", &m4);
    printf("\nSubject 5: ");
    scanf("%d", &m5);

    total = m1 + m2 + m3 + m4 + m5;
    per = (float)total / 5;
    printf("\n------------------------------");
    printf("\nTotal marks is   :%d", total);
    printf("\nPercente is      :%.2f", per);

    if (per > 60)
    {
        printf("\nFirst Division");
    }
    else
    {
        if (per >= 50)
            printf("\nSecond Division");
        else
        {
            if (per >= 40)
                printf("\nThird Division");
            else
            {
                printf("\nFail");
            }
        }
    }

    getch();
    return 0;
}