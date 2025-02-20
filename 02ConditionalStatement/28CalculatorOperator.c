// Operator as case in switch case
#include <stdio.h>
#include <conio.h>
int main()
{
    char op;
    int a, b;
    int result;
    printf("\nEnter the operator (+,-,*,/):");
    scanf("%c", &op);
    printf("\nEnter 1st number:");
    scanf("%d", &a);
    printf("\nEnter 2nd number:");
    scanf("%d", &b);
    switch (op)
    {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        result = a / b;
        printf("\nreminder = %d", a % b);
        break;
    default:
        printf("\nInvalid operator");
        result = 0;
        break;
    }
    printf("\nResult is = %d", result);
    getch();
    return 0;
}