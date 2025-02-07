#include <stdio.h>
#include <conio.h>
int main()
{
    char g;
    int yos, qual, sal = 0;

    printf("\nEnter Gender (M/F): ");
    scanf("%c", &g);
    printf("\nYear of Service: ");
    scanf("%d", &yos);
    printf("\nQualification (0-G, 1-PG): ");
    scanf("%d", &qual);

    if (g == 'm' && yos >= 10 && qual == 0)
        sal = 15000;
    else if ((g = 'm' && yos >= 10 && qual == 0) || (g == 'm' && yos < 10 && qual == 1)|| (g == 'f' && yos < 10 && qual == 1))
        sal = 10000;
    else if (g == 'm' && yos < 10 && qual == 0)
        sal = 7000;
    else if (g = 'f' && yos >= 10 && qual == 1)
        sal = 12000;
    else if (g == 'f' && yos >= 10 && qual == 0)
        sal = 9000;
    else if (g == 'f' && yos < 10 && qual == 0)
        sal = 6000;

    printf("\nSalary of Employee = %d", sal);
    return 0;
}