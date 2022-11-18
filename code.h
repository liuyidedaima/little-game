#define ROW 3
#define COL 3

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

//申明
void InitBoard(char board[ROW][COL], int row, int col);//初始化
void PrintBoard(char board[ROW][COL], int row, int col);//打印棋盘
void PlayerMove(char board[ROW][COL], int row, int col);//玩家下棋
void AlMove(char board[ROW][COL], int row, int col);//电脑下棋
char IsWin(char board[ROW][COL], int row, int col);//判断输赢
int  IsFull(char board[ROW][COL], int row, int col);//判断平局
