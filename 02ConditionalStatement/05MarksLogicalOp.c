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

    if (per >= 60)
        printf("\nFirst division");
    if ((per >= 50) && (per < 60))
        printf("\nSecond division");
    if ((per >= 40) && (per < 50))
        printf("\nThird division");
    if (per < 40)
    printf("\nFail");

    getch();
    return 0;
}