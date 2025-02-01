// If the marks obtained by a sutdent in five different subjects are input through the keyboard, write a program to find out the aggregate marks and percentage markds obtained by the student. Assume that the maximum marks that can be obtained by a student in each subject is 100.
#include <stdio.h>
#include <conio.h>
int main()
{
    int m1, m2, m3, m4, m5, aggr;
    float percent;
    printf("\nEnter the marks obtained in 5 subjects....");
    printf("\nSubject 1:");
    scanf("%d", &m1);
    printf("\nSubject 2:");
    scanf("%d", &m2);
    printf("\nSubject 3:");
    scanf("%d", &m3);
    printf("\nSubject 4:");
    scanf("%d", &m4);
    printf("\nSubject 5:");
    scanf("%d", &m5);

    aggr = m1 + m2 + m3 + m4 + m5;
    percent = (float)aggr / 5;

    printf("\n----------------------------------");
    printf("\nAggregate marks is    :%d", aggr);
    printf("\nPercentage is         :%.2f", (float)percent);
    getch();
    return 0;
}