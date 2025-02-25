// A 5-digit positive integer is entered through the keyboard, write a recursive and a non-recursive function to calculate sum of digits of the 5-digit number.
#include<stdio.h>
#include<conio.h>
int rec_fun(int num);
int non_rec_fun(int num);

int main()
{
    int num;
    int rec,non_rec;
    printf("\nEnter a number:");
    scanf("%d", &num);
    rec=rec_fun(num);
    non_rec=non_rec_fun(num);
    printf("\nCalculate sum of digit using recursive function is %d", rec);
    printf("\nCalculate sum of digit using non-recursive function is %d", non_rec);
    getch();
    return 0;
}
int rec_fun(int num)
{
    if(num==0)
    {
        return 0;
    }
    else
    {
        return (num%10)+rec_fun(num/10);
    }
}
int non_rec_fun(int num)
{
    int result=0;
    while(num>0)
    {
        result=result+num%10;
        num=num/10;
    }
    return result;
}