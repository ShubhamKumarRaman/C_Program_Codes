// Square of a number
#include <stdio.h>
#include <conio.h>
float square(float x);
int main()
{
    float num;
    float sqr;
    printf("\nEnter a number:");
    scanf("%f", &num);
    sqr = square(num);
    printf("\nSquare is %f", sqr);
    getch();
    return 0;
}
float square(float x)
{
    float y;
    y = x * x;
    return y;
}