// Write a menu driven program which has following options:
// 1.	Factorial of a number
// 2.	Prime or not
// 3.	Odd or even
// 4.	Exit
// Once a menu item is selected the appropriate action should be taken and oce this action is finished, the menu should reappear. Unless the user selects the ‘Exit’ option the program should continue to run.
// Hint: Make use of an infinite which and a switch statement.
#include <stdio.h>
#include <conio.h>
#include <math.h>
// #include <stdlib.h>
int main()
{
    int choice, num, i;
    long int fact;
    while (1)
    {
        printf("\n----------------------");
        printf("\n1. Factorial of a number");
        printf("\n2. Prime or not");
        printf("\n3. Odd or even");
        printf("\n4. Exit");
        printf("\n----------------------");
        printf("\nEnter your choice:");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        {
            printf("\nEnter a number:");
            scanf("%d", &num);
            fact = 1;
            for (i = 1; i <= num; i++)
            {
                fact = fact * i;
            }
            printf("\nFactorial of %d is %ld", num, fact);
            break;
        }
        case 2:
        {
            printf("\nEnter a number:");
            scanf("%d", &num);
            for (i = 2; i < num; i++)
            {
                if (num % i == 0)
                {
                    printf("\nNot a prime number.");
                    break;
                }
            }
            if (i == num)
            {
                printf("\nPrime number:");
                break;
            }
        }
        case 3:
        {
            printf("\nEnter a number:");
            scanf("%d", &num);
            if (num % 2 == 0)
            {
                printf("\nEven number.");
            }
            else
            {
                printf("\nOdd number.");
            }
            break;
        }
        case 4:
        {
            // exit();
            goto end;
        }
        }
    }
end:
    getch();
    return 0;
}