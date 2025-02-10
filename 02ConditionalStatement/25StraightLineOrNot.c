// Give three points (x1, y1), (x2, y2) and (x3, y3), write a c program to check if all the three points fall on one straight line.
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int x1, y1, x2, y2, x3, y3;
    double ab, bc, ac;
    printf("\nEnter Co-ordinate of 1st point A(x1,y1):");
    scanf("%d %d", &x1, &y1);
    printf("\nEnter Co-ordinate of 2nd point B(x2,y2):");
    scanf("%d %d", &x2, &y2);
    printf("\nEnter Co-ordinate of 3rd point C(x3,y3)");
    scanf("%d %d", &x3, &y3);
    ab = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    bc = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));
    ac = sqrt(pow((x3 - x1), 2) + pow((y3 - y1), 2));
    printf("\nDistance between lines are:");
    printf("\nAB=%f,BC=%f,AC=%f", ab, bc, ac);
    if ((ab + bc) == ac || (ab + ac) == bc || (bc + ac) == ab)
    {
        printf("\nAll the three points fall on one straight line.");
    }
    else
    {
        printf("\nAll the three points do not fall on one straight line.");
    }
    getch();
    return 0;
}