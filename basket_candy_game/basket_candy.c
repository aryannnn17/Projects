#include <stdio.h>
#include <conio.h>
#include <dos.h>

void main()
{
    int candy_X = 40, candy_Y = 5, box_X = 40, box_Y = 22;
    int score = 0, lifes = 3, n;
    char ch;
    system("color 04");
start:
    clrscr();
    gotoxy(40, 5);
    printf("SCORE=%d", score);
    gotoxy(40, 6);
    printf("LIVE=%d", lifes);
    gotoxy(candy_X, candy_Y);
    printf("0");
    gotoxy(box_X, box_Y);
    printf("#");
    gotoxy(box_X + 7, box_Y);
    printf("#");
    if (kbhit())
    {
        ch = getch();
        switch (ch)
        {
        case 'a':
            box_X--;
            break;
        case 'd':
            box_X++;
            break;
        case 'x':
            exit(0);
            break;
        }
    }
    candy_Y++;
    if (candy_Y == 22)
    {
        n = candy_X - box_X;
        if (n == 0 || n == -1 || n == 1)
        {
            score++;
        }
        else
        {
            lifes--;
            if (lifes == 0)
            {
                clrscr();
                gotoxy(40, 13);
                printf("GAME OVER");
                getch();
                exit(0);
            }
        }
        candy_Y = 2;
        candy_X = rand() % 20 + 1;
    }
    delay(300);
    goto start;
}