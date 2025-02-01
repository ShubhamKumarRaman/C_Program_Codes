//Simple Interest
#include<stdio.h>
#include<conio.h>
int main()
{
    float p,r,t,si,amt;
    printf("\nTo Find the Simple interest......\n");
    printf("\nEnter the principle value : Rs.");
    scanf("%f", &p);
    printf("\nEnter the Rate            :");
    scanf("%f", &r);
    printf("\nEnter the time (in years) :");
    scanf("%f", &t);

    si=p*r*t/100;
    amt=p+si;

    printf("\n-------------------------------------");
    printf("\nSimple interest is        :Rs. %.2f", si);
    printf("\nTotal Amount is           :Rs. %.2f", amt);
    getch();
}