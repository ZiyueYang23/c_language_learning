#define _CRT_SECURE_NO_WARNINGS 

#include "game.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    int number = 0;

    do
    {
        out:
        number = OneMore(); //精髓神之一手！！！！

        do
        {
            switch (number)
            {
            case 1:
                printf(" *Game start* \n\n");
                Game();
                break;
            case 0:
                printf(" *Game over* \n\n\n");
                break;
            default:
                printf("*Please re-enter* \n\n");
                goto out;
            }

        } while (number != 1 && number != 0);
    } while (number);

    return 0;
}

void Game()
{
    char array[ROW][COL] = {0};

    // 提示
    Tips();

    // 棋盘初始化
    InitArray(array, ROW, COL); // ！！！传数组名进去

    // 棋盘显示
    Display(array, ROW, COL);

    while (1)
    {
        int WinComputer = 0;
        int WinPlayer = 0;

        int Playercnt = 0;
        int Computercnt = 0;

        // 人输入
        PlayerMove(array, ROW, COL);
        Playercnt++;

        // 棋盘显示
        Display(array, ROW, COL);

        // 判断
        if (JudgePlayerWin(array, ROW, COL) == 1)
        {
            printf("\n*Game Over* ");
            break;
        }
        // 电脑输入
        ComputerMove(array, ROW, COL);
        Computercnt++;

        // 棋盘显示
        Display(array, ROW, COL);

        // 判断

        if (JudgeComputerWin(array, ROW, COL) == 1)
        {
            printf("\n*Game Over* ");
            break;
        }
    }
}


//有一点待改进的地方-个人目前想到的
//1.算法优化，现在处于人工智障
//2.如果我不小心替换了电脑下的棋子，就会直接覆盖，应该加一句if然后报警告再恢复提示重新下棋
//3.没有加平局进去
//4.JudgePlayerWin和JudgeComputer函数有点重复，可以优化判断语句
//5.完成日期是2023-12-16