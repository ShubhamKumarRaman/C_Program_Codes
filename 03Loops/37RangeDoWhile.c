// Find the range between maximum and mininum
#include <stdio.h>
#include <conio.h>
int main()
{
    int num, i = 1, n, max, min, range;
    printf("\nHow many numbers do you have:");
    scanf("%d", &n);
    printf("\nEnter 1st number:");
    scanf("%d", &num);
    max = min = num;
    do
    {
        printf("\nEnter %d number:", ++i);
        scanf("%d", &num);
        if (num > max)
            max = num;
        if (num < min)
            min = num;
        
    } while (i < n);
    range = max - min;
    printf("\nMaxinum value =%d, Minimum value =%d", max, min);
    printf("\nRange between %d & %d is %d", max, min, range);
    getch();
    return 0;
}