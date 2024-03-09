#ifndef __GAME_HEAD__
#define __GAME_HEAD__


#define ROW 3 // 行
#define COL 3 // 列

char array[ROW][COL];

void Menu();

void Game();

void Tips();

void InitArray(char array[ROW][COL], int row, int col);

void Display(char array[ROW][COL], int row, int col);

void PlayerMove(char array[ROW][COL], int row, int col);

void ComputerMove(char array[ROW][COL], int row, int col);

int JudgePlayerWin(char array[ROW][COL], int row, int col);

int JudgeComputerWin(char array[ROW][COL], int row, int col);

int OneMore();


#endif
