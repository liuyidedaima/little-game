#define ROW 3
#define COL 3

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

//����
void InitBoard(char board[ROW][COL], int row, int col);//��ʼ��
void PrintBoard(char board[ROW][COL], int row, int col);//��ӡ����
void PlayerMove(char board[ROW][COL], int row, int col);//�������
void AlMove(char board[ROW][COL], int row, int col);//��������
char IsWin(char board[ROW][COL], int row, int col);//�ж���Ӯ
int  IsFull(char board[ROW][COL], int row, int col);//�ж�ƽ��
