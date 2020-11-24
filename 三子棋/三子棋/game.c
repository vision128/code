#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

//初始化为空格
void InitBoard(char board[][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

//搭建棋盘
void ShowBoard(char board[][COL], int row, int col)
{
	for (int i = 0; i < row; i++)   //行数
	{
		for (int j = 0; j < col; j++)     //列数
		{
			printf(" %c ",board[i][j]);
			if (j < col - 1 )
			{
				printf("|");
			}
		}
		printf("\n");

		if (i < row - 1)
		{
			for (int j = 0; j < col; j++)     //列数
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}

//玩家走
void PlayerMove(char board[][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请输入你的坐标x,y(1-3):");
		scanf("%d%d", &x, &y);
		if ((x >= 1) && (x <= 3) && (y >= 1) && (y <= 3))
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = 'X';
				break;
			}
		}
		else
			printf("你输入的坐标不合法，请重新输入:\n");
	}
}


//电脑走
void CmptMove(char board[][COL], int row, int col)
{
	printf("电脑走：\n");
	while (1)
	{
		int x = rand() % ROW;
		int y = rand() % COL;
		if (board[x ][y ] == ' ')
		{
			board[x][y] = 'O';
			break;
		}
	}
}

//判断是否有人赢
char IsWin(char board[][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
			return board[i][1];//行
		if (board[0][i] == board[1][i] && board[2][i] == board[2][i] && board[0][i] != ' ')
			return board[0][i];//列
		if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
			return board[0][0];//对角线
		if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
			return board[0][2];//对角线
		if (IsFull(board, ROW, COL) == 1)
			return 'Q';//平局
	}
	return ' ';
}

//判断是否平局
int IsFull(char board[][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] = ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}
