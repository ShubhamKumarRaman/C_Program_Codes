// Calculate of simple interest for 3 sets of p,n and r
#include <stdio.h>
#include <conio.h>
void main()
{
    float principle, rate, time, SI, Amount;
    int i = 0;
    while (i < 3)
    {
        printf("\nEnter Principle       : ");
        scanf("%f", &principle);
        printf("Enter rate              : ");
        scanf("%f", &rate);
        printf("Enter time (in years)   :");
        scanf("%f", &time);
        SI = (principle * rate * time) / 100;
        Amount = principle + SI;
        printf("--------------------------------");
        printf("\nSimple Interest is : %.2f", SI);
        printf("\nAmount is          : Rs. %.2f", Amount);
        printf("\n--------------------------------");
        i++;
    }
}