#define _CRT_SECURE_NO_WARNINGS
#include "code.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
	int n = 0, m = 0;
	for (n = 0; n < row; n++)
	{
		for (m = 0; m < col; m++)
		{
			board[n][m] = ' ';
		}
	}
}

void PrintBoard(char board[ROW][COL], int row, int col)
{
	int j = 0;
	for (j = 0; j < row; j++)
	{
		int k = 0;
		for (k = 0; k < col; k++)//��ӡһ������
		{
			printf(" %c ", board[j][k]);
			if (k < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (j < row - 1)
		{
			for (k = 0; k < col; k++)//��ӡ�ָ���
			{
				printf("---");
				if (k < col - 1)
				{
					printf("|");
				}
			}

		}
		printf("\n");
	}
}


void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("�������������Ӵ���:1 1\n");
		scanf("%d %d", &x, &y);
		if ((x >= 1 && x <= ROW) && (y >= 1 && y <= COL))//�ж��Ƿ�����Ϸ�
		{
			if (' ' == board[x - 1][y - 1])//�ж��Ƿ�����
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("�ѱ����ӣ�����ѡ");
			}
		}
		else
		{
			printf("�������������");
		}
	}
}


void AlMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;

	printf("��������\n");
	while (1)
	{
		x = rand() & 3;//���������
		y = rand() & 3;
		if (' ' == board[x - 1][y - 1])
		{
			board[x - 1][y - 1] = '#';
			break;
		}
	}

}

int  IsFull(char board[ROW][COL], int row, int col)//�ж��Ƿ�ƽ��
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < ROW; j++)
		{
			if (' ' == board[i][j])
				return 0;
		}
	}
	return 1;
}


char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < ROW; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')//�ж���
		{
			return board[i][0];
		}
	}

	for (i = 0; i < ROW; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')//�ж���
		{
			return board[0][i];
		}
	}
	     //�ж϶Խ���
		if ((board[0][0] == board[1][1] && board[1][1] == board[2][2]&&board[1][1]!=' ') || (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' '))//
		{
			return board[1][1];
		}

		if (1 == IsFull(board, ROW, COL))
		{
			return '$';
	    }
		return 'c';
}

