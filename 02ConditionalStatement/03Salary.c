// In a company an employee is paid as under:
//  If his basic salary is less than Rs. 1500, then HRA=10% of basic salary and DA = 90% of basic salary. If his salary is either equal to or above Rs. 1500, then HRA= Rs. 500 and DA=98% of basic salary. If the employee's salary is input through the keyboard write a program to find his gross salary.
#include <stdio.h>
#include <conio.h>
int main()
{
    float bs, da, hra, grpay;
    printf("\nEnter the Basic salary of an employee: Rs. ");
    scanf("%f", &bs);
    if (bs < 1500)
    {
        hra = bs * 10 / 100;
        da = bs * 90 / 100;
    }
    else
    {
        hra = 500;
        da = bs * 98 / 100;
    }
    grpay = bs + da + hra;
    printf("\n---------------------------------");
    printf("\nBasic salary is   Rs. %.2f", bs);
    printf("\nHRA is            Rs. %.2f", hra);
    printf("\nDA is             Rs. %.2f", da);
    printf("\n---------------------------------");
    printf("\nGross salary is   Rs. %.2f", grpay);
    getch();
    return 0;
}