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

    if(m1 < 0 || m1 > 100 || m2 < 0 || m2 > 100 || m3 < 0 || m3 > 100 || m4 < 0 || m4 > 100 || m5 < 0 || m5 > 100)
    {
        printf("\nInvalid marks entered. Please enter marks between 0 and 100.");
        getch();
        return 1;
    }

    total = m1 + m2 + m3 + m4 + m5;
    per = (float)total / 5;
    printf("\n------------------------------");
    printf("\nTotal marks is   :%d", total);
    printf("\nPercente is      :%.2f", per);

    if (per >= 60)
        printf("\nFirst division");
    else if (per >= 50)
        printf("\nSecond division");
    else if (per >= 40)
        printf("\nThird division");
    else
        printf("\nFail");
        
    getch();
    return 0;
}