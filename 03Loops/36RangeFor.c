// Write a program to find the range of a set of numbers entered through the keyboard. Range is the difference between the smallest and biggest number in the list.
#include <stdio.h>
#include <conio.h>
int main()
{
    int num, i, max = 0, min, range;
    printf("\nHow many numbers do you have:");
    scanf("%d", &i);
    printf("\nEnter 1st number:");
    scanf("%d", &num);
    max = num;
    min = num;
    for (int j = 2; j <= i; j++)
    {
        printf("\nEnter %d number:", j);
        scanf("%d", &num);

        if (num < min)
            min = num;
        else if (num > max)
            max = num;
    }
    range = max - min;
    printf("\nMax=%d,Min=%d", max, min);
    printf("\nRange between %d & %d is %d", max, min, range);
    getch();
    return 0;
}