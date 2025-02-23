// Calling of functions
#include <stdio.h>
#include <conio.h>
//
void italy();
void brazil();
void argentina();

int main()
{
    printf("\nI am in main");
    italy();
    brazil();
    printf("\nFinally I am back in main");
    getch();
    return 0;
}
void italy()
{
    printf("\nI am in Italy");
    brazil();
    printf("\nI am back in italy");
}
void brazil()
{
    printf("\nI am in Brazil");
    argentina();
    printf("\nI am back in brazil");
}
void argentina()
{
    printf("\nI am in Argentina");
}
