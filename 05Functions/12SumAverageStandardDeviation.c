// Write a function that receives 5 integers and returns the sum, average and standard deviation of these numbers. Call this function from main() and print the results in main().
#include <stdio.h>
#include <conio.h>
#include <math.h>

void function(int *sum, float *average, float *std_dev);
int main()
{
    int sum;
    float average, std_dev;
    function(&sum, &average, &std_dev);
    printf("\n----------------------------------");
    printf("\nSum is %d", sum);
    printf("\nAverage is %f", average);
    printf("\nStandard deviation is %f", std_dev);
    getch();
    return 0;
}
void function(int *sum, float *average, float *std_dev)
{
    int a, b, c, d, e;
    printf("\nEnter 5 numbers:");
    printf("\nEnter 1st number:");
    scanf("%d", &a);
    printf("\nEnter 2nd number:");
    scanf("%d", &b);
    printf("\nEnter 3rd number:");
    scanf("%d", &c);
    printf("\nEnter 4th number:");
    scanf("%d", &d);
    printf("\nEnter 5th number:");
    scanf("%d", &e);
    // Calculate sum
    *sum = a + b + c + d + e;
    // Calculate average
    *average = *sum / 5.0;
    // Calculate standard deviation
    // Standard deaviation= square root of [ square of (number1-average)+ square of (number 2-average)+...........]/total entered number
    *std_dev = sqrt((pow(a - *average, 2)) + (pow(b - *average, 2)) + (pow(c - *average, 2)) + (pow(d - *average, 2)) + (pow(e - *average, 2)) / 5.0);
}