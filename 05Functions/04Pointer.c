// pointer
#include <stdio.h>
#include <conio.h>
int main()
{
    int i = 3, *j, **k;
    j = &i;
    k = &j;
    printf("\nAddress of i=%u", &i);
    printf("\nAddress of i=%u", j);
    printf("\nAddress of i=%u", *k);
    printf("\nAddress of j=%u", &j);
    printf("\nAddress of j=%u", k);
    printf("\nAddress of k=%u", &k);
    printf("\nValue of i=%d", i);
    printf("\nValue of i=%d", *(&i));
    printf("\nValue of i=%d", *j);
    printf("\nValue of i=%d", **k);
    printf("\nValue of j=%u", j);
    printf("\nvalue of j=%u", *k);
    printf("\nvalue of k=%u", k);
    getch();
    return 0;
}