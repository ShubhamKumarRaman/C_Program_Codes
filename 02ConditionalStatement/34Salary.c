// Write a program to calculate the salary of a medical representative based on the sales. Bonus and incentive to be offered to him will be based on total sales. If the sales exceeds or equals to Rs. 1,00,000, follow the particular of Table 1, otherwise follow Table 2.
//  Table 1                 Table 2
//  Basic=Rs. 3000          Basic==Rs. 3000
//  HRA=20%                 HRA=20%
//  DA=110%                 DA=110%
//  Conveyance=Rs. 500      Conveyance=Rs. 500
//  Incentive=10% of sales  Incentive=5% of sales
//  Bonus=Rs. 500.          Bonus=Rs. 200.
#include <stdio.h>
int main()
{
    float bs, hra, da, cv, inc, bonus, sale, grpay;
    printf("\nEnter total sales in Rs. ");
    scanf("%f", &sale);
    if (sale >= 100000)
    {
        bs = 3000;
        hra = bs * 20 / 100;
        da = bs * 110 / 100;
        cv = 50;
        inc = sale * 10 / 100;
        bonus = 500;
    }
    else
    {
        bs = 3000;
        hra = bs * 20 / 100;
        da = bs * 110 / 100;
        cv = 500;
        inc = sale * 5 / 100;
        bonus = 200;
    }
    grpay = bs + hra + da + cv + inc + bonus;
    printf("\nTotal sales   :-Rs. %.2f", sale);
    printf("\nBasic salary  :-Rs. %.2f", bs);
    printf("\nHRA           :-Rs. %.2f", hra);
    printf("\nDA            :-Rs. %.2f", da);
    printf("\nConveyance    :-Rs. %.2f", cv);
    printf("\nIncentive     :-Rs. %.2f", inc);
    printf("\nBonus         :-Rs. %.2f", bonus);
    printf("\n===============================");
    printf("\nGross salary  :-Rs. %.2f", grpay);
}