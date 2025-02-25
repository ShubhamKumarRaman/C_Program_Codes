// write a function that receives marks received by a student in 3 subjects and returns the average and percentage of these marks. Call this function from main() and print the results in main().
#include<stdio.h>
#include<conio.h>
void marks(int a,int b,int c,float *average,float *percentage);
int main()
{
    int a,b,c;
    float average,percentage;
    printf("\nEnter marks obtained by student in 3 subjects:");
    printf("\nSubject 1:");
    scanf("%d", &a);
    printf("\nSubject 2:");
    scanf("%d", &b);
    printf("\nSubject 3:");
    scanf("%d", &c);
    marks(a,b,c,&average,&percentage);
    printf("\nAverage is %.2f", average);
    printf("\nPercentage is %.2f ", percentage);
    getch();
    return 0;
}
void marks(int a,int b,int c,float *average,float *percentage)
{
    *average=(a+b+c)/3.0;
    *percentage=((a+b+c)/300.0)*100;
}
