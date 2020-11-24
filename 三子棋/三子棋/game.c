#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

//��ʼ��Ϊ�ո�
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

//�����
void ShowBoard(char board[][COL], int row, int col)
{
	for (int i = 0; i < row; i++)   //����
	{
		for (int j = 0; j < col; j++)     //����
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
			for (int j = 0; j < col; j++)     //����
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

//�����
void PlayerMove(char board[][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("�������������x,y(1-3):");
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
			printf("����������겻�Ϸ�������������:\n");
	}
}


//������
void CmptMove(char board[][COL], int row, int col)
{
	printf("�����ߣ�\n");
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

//�ж��Ƿ�����Ӯ
char IsWin(char board[][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
			return board[i][1];//��
		if (board[0][i] == board[1][i] && board[2][i] == board[2][i] && board[0][i] != ' ')
			return board[0][i];//��
		if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
			return board[0][0];//�Խ���
		if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
			return board[0][2];//�Խ���
		if (IsFull(board, ROW, COL) == 1)
			return 'Q';//ƽ��
	}
	return ' ';
}

//�ж��Ƿ�ƽ��
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
