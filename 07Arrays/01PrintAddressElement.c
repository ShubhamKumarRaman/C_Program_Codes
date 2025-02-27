//Write a program to display array elements with their addresses.
#include<stdio.h>

int main()
{
    int num[5]={1,2,3,4,5};
    for(int i=0;i<5;i++)
    {
        printf("\n num[%d] = %d Address : %u",i,num[i],&num[i]);
    }
    return 0;
}