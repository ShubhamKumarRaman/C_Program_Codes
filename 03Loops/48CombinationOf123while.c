// Write a program to generate all combinations of 1,2 and 3 using for loop.
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k;
    printf("\nAll combinations of 1,2and3 are:");
    i=1;
    while(i<=3)
    {
        j=1;
        while(j<=3)
        {
            k=1;
            while(k<=3)
            {
                printf("%d%d%d\t",i,j,k);
                k++;
            }
            j++;
        }
        i++;
    }
    getch();
    return 0;
}