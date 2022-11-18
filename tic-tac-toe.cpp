#define _CRT_SECURE_NO_WARNINGS
#include "code.h"


void menu()
{
	printf("**************************\n");
	printf("*****1.play    0.exit*****\n");
	printf("**************************\n");
}

void game()
{
	char board[ROW][COL];
	int ret = 0;
	InitBoard(board, ROW, COL);//初始化棋盘
	PrintBoard(board, ROW, COL);//打印棋盘
	while (1)
	{


		PlayerMove(board, ROW, COL);//玩家下棋
		PrintBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);//判断输赢
		if (ret != 'c')
		{
			break;
		}

		AlMove(board, ROW, COL);//电脑下棋
		PrintBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	if (ret == '#')
	{
		printf("电脑赢\n");
	}
	if (ret == '$')
	{
		printf("平局\n");
	}

}

void test()
{
	int i = 0;
	do
	{
		menu();
		printf("请选择是否进行游戏：");//这三行要在循环里不然死循环
		scanf("%d", &i);
		switch (i)
		{
		case 1:
			printf("开始游戏\n");
			game();
			break;//不要忘记跳出循环，否则会执行case 0
		case 0:
			printf("退出游戏\n");
			break;
		defualt:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (i);

}
int main()
{
	test();
	srand((unsigned int)time(NULL));
	return 0;
}