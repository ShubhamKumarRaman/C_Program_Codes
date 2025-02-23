// Sending and receiving values between functions
#include <stdio.h>
#include <conio.h>
int sum(int x, int y, int z)
{
    return x + y + z;
}
void main()
{
    int a, b, c;
    printf("\nEnter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    printf("Enter 3rd number: ");
    scanf("%d", &c);

    int result = sum(a, b, c);
    printf("\nSum is : %d", result);
}