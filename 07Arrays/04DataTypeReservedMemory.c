// Write a program to print bytes reserved for various types of data and space required for storing them in memory using arrays.
#include <stdio.h>
void main()
{
    int i[10];
    char c[10];
    float f[10];
    long l[10];
    double d[10];
    
    printf("\nThe type 'int' requires %ld Bytes", sizeof(int));
    printf("\nThe type 'char' requies %ld Bytes", sizeof(char));
    printf("\nThe type 'float' requires %ld Bytes", sizeof(float));
    printf("\nThe type 'long' requires %ld Bytes", sizeof(long));
    printf("\nThe type 'double' requires %ld Bytes", sizeof(double));
    printf("\n=====================================");
    printf("\n%ld memory locations are reserved for ten 'int' element", sizeof(i));
    printf("\n%ld memory locations are reserved for ten 'char' elements", sizeof(c));
    printf("\n%ld memory locations are reserved for ten 'float' elements", sizeof(f));
    printf("\n%ld memory locations are reserved for ten 'long' elements", sizeof(l));
    printf("\n%ld memory locations are reserved for ten 'double' elements", sizeof(d));
}