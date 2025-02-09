// A five-digit number is entered through the keyboard. Write a program to obtain the reversed number and to determine whether the original and reversed numbers are equal or not.
#include<stdio.h>
#include<conio.h>
void main(){
    int num, rev = 0, temp;
    printf("Enter a five-digit number: ");
    scanf("%d", &num);
    temp = num;
    while (temp != 0){
        rev = rev * 10 + temp % 10;
        temp = temp / 10;
    }
    printf("Reversed number: %d\n", rev);
    if (num == rev){
        printf("The original and reversed numbers are equal.\n");
    } else {
        printf("The original and reversed numbers are not equal.\n");
    }
    getch();
}