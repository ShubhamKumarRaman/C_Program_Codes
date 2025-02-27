// Write a program to exceed the upper boundary of an array and see the element after expansion of an array.
#include <stdio.h>
void main()
{
    int num[5] = {1, 2, 3, 4, 5};
    num[5] = 6; //It prints 
    num[6]=7;   //But It generates warning :- Stack smashing detected (stack overflow warning)
    for (int i = 0; i < 7; i++)
    {
    printf("\num[%d]= %d", i,num[i]);
    }
}