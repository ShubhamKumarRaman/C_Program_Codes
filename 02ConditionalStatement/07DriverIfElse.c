/* A company insures its drivers in the following cases:
- if the driver is married.
- If the driver is unmarried, male & above 30 years of age.
- If the driver is unmarried, female & above 25 years of age.
*/
#include <stdio.h>
#include <conio.h>
int main()
{
    char ms, gender;
    int age;

    printf("\nEnter your age:");
    scanf("%d", &age);
    printf("\nEnter your gender:");
    fflush(stdin);
    scanf("%c", &gender);
    printf("\nEnter your Marital Status:");
    fflush(stdin);
    scanf("%c", &ms);

    if (ms == 'M')
        printf("\nDrivr is instured.");
    else
    {
        if (gender = 'M')
        {
            if (age > 30)
            {
                printf("\nDriver is insured");
            }
            else
            {
                printf("\nDriver is not insured.");
            }
        }
        else
        {
            if (age > 25)
            {
                printf("\nDriver is instured.");
            }
            else
            {
                printf("Driver is not instured.");
            }
        }
    }
    getch();
    return 0;
}