#include <stdio.h>
#include <conio.h>
int main()
{
    char ms, gender;
    int age;
    printf("\nEnter your age:");
    scanf("%d", &age);
    printf("\nEnter your marital status (M/U):");
    fflush(stdin);
    scanf("%c", &ms);
    printf("\nEnter your gender (M/F):");
    fflush(stdin);
    scanf("%c", &gender);

    if ((ms == 'M') || (ms == 'U' && gender == 'M' && age > 30) || (ms == 'U' && gender == 'F' && age > 25))
    {
        printf("Driver is insured.");
    }
    else
        printf("\nDriver is not insured.");

    getch();
    return 0;
}