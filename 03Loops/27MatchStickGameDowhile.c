// Matchstick game
#include <stdio.h>
#include <conio.h>
int main()
{
    int match = 21, user, computer;
    do
    {
        printf("\nNumber of matchstick left :%d", match);
        printf("\n------------------------------");
        printf("\nPick up matchstick (1 to 4):");
        scanf("%d", &user);
        if (user > 4)
        {
            printf("\nInvalid Entry!!");
            continue;
        }
        match = match - user;
        printf("\nNumber of matchstick left:%d", match);
        computer = 5 - user;
        printf("\nComputer picked up %d matchsticks.", computer);
        match = match - computer;
        if (match == 1)
        {
            printf("\nNumber of matchsticks left :%d", match);
            printf("\nYou lost the game!");
            break;
        }
    } while (1);
    getch();
    return 0;
}