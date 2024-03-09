#define _CRT_SECURE_NO_WARNINGS

#include "game.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Menu() 
{
    printf("\n\n\n三子棋\n\n");

    printf("*************************\n");
    printf("*************************\n");
    printf("***** 1.play 0.exit *****\n");
    printf("*************************\n");
    printf("*************************\n");

}

void Tips()
{
    printf("\n*Coordinate=(Row,Col)* \n\n");
}

void InitArray(char array[ROW][COL], int row, int col)
{
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            array[i][j] = ' ';
        }
    }
}

void Display(char array[ROW][COL], int row, int col)
{
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            printf(" %c ", array[i][j]);

            if (j < COL - 1)
            {
                printf("|");
            }
        }

        printf("\n");

        if (i < ROW - 1)
        {
            for (int j = 0; j < COL; j++)
            {
                printf("---");

                if (j < COL - 1)
                {
                    printf("|");
                }
            }
        }
        printf("\n");
    }
}

void PlayerMove(char array[ROW][COL], int row, int col)
{
    int x = 0;
    int y = 0;
    int temp = 1;

    printf("\n*Please Enter Coordinates* \n\n");
    printf("Player Enter :>");
    scanf("%d %d", &x, &y);
    printf("\n");

    if (x >= 1 && x <= 3 && y >= 1 && y <= 3)
    {
        array[x - 1][y - 1] = '*';
        temp = 0;
    }
    else
    {
        while (temp)
        {
            printf("!!!Error Coordinates!!! \n\n");
            printf("*Please Re-enter Coordinates* \n\n");
            printf("Player Enter :>");
            scanf("%d %d", &x, &y);

            if (x >= 1 && x <= 3 && y >= 1 && y <= 3)
            {
                array[x - 1][y - 1] = '*';
                temp = 0;
            }
        }
    }
}

void ComputerMove(char array[ROW][COL], int row, int col)
{
    printf("*Computer Enter :> \n\n");

    int randnumberx = 0;
    int randnumbery = 0;
    int temp = 1;
    
    do
    { 
        srand(time(0));
        int randnumberx = rand()%ROW;
        int randnumbery = rand()%COL;

        if(array[randnumberx][randnumbery]==' ')
        {
            array[randnumberx][randnumbery] = '#';
            temp = 0;
        }

    } while (temp);

}

int JudgePlayerWin(char array[ROW][COL], int row, int col)
{
    int WinPlayer = 0;

    int x = 0;
    int y = 0;
    int z1 = 0;
    int z2 = 0;

    for (int j = 0; j < COL;j++)
    {
        int x = 0;

        for (int i = 0; i < ROW;i++)
        {
            if(array[i][j]=='*')
            {
                x++;
            }
        }

        if (x == ROW)
        {
            printf("\n*PlayerWin!!!!\n\n");
            WinPlayer = 1;
        }
    }

    

    for (int i = 0; i < ROW;i++)
        {
            int y = 0;

            for (int j = 0; j < COL; j++)
            {
                if (array[i][j] == '*')
                {
                    y++;
                }
            }

            if (y == COL)
            {
                printf("\n*PlayerWin!!!!\n\n");
                WinPlayer = 1;
            }
        }

    for (int j = 0; j < COL;j++)
    {
        if(array[j][COL-1-j]=='*')
        {
            z2++;
        }
    }
    
    if(z2==COL)
    {
        printf("\n*PlayerWin!!!!\n\n");
        WinPlayer = 1;
    }

    for (int i = 0; i < ROW; i++)
    {
        if (array[i][i] == '*')
        {
            z1++;
        }
    }

    if (z1 == ROW)
    {
        printf("\n*PlayerWin!!!!\n\n");
        WinPlayer = 1;
    }

    return WinPlayer;
}

int JudgeComputerWin(char array[ROW][COL], int row, int col)
{
    int WinComputer = 0;

    int x = 0;
    int y = 0;
    int z1 = 0;
    int z2 = 0;

    for (int j = 0; j < COL;j++)
    {
        int x=0;

        for (int i = 0; i < ROW; i++)
        {
            if (array[i][j] =='#')
            {
                x++;
            }
        }

        if (x == ROW)
        {
            printf("\n*ComputerWin!!!!\n\n");
            WinComputer = 1;
        }
    }

    for (int i = 0; i < ROW;i++)
    {
        int y = 0;

        for (int j = 0; j < COL; j++)
        {
            if (array[0][j] == '#')
            {
                y++;
            }
        }

        if (y == COL)
        {
            printf("\n*ComputerWin!!!!\n\n");
            WinComputer = 1;
        }
    }

    for (int j = 0; j < COL; j++)
    {
        if (array[j][COL - 1 - j] == '#')
        {
            z2++;
        }
    }

    if (z2 == COL)
    {
        printf("\n*ComputerWin!!!!\n\n");
        WinComputer = 1;
    }

    for (int i = 0; i < ROW; i++)
    {
        if (array[i][i] == '#')
        {
            z1++;
        }
    }

    if (z1 == ROW)
    {
        printf("\n*ComputerWin!!!!\n\n");
        WinComputer = 1;
    }

    return WinComputer;
}

int OneMore()
{
    int temp = 0;

    Menu();

    printf("\n请输入 1 or 0 :> ");

    scanf("%d", &temp);

    printf("\n\n");

    return temp;
}
