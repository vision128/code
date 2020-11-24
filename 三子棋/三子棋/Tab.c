#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void Menu()
{
	printf("***********************\n");
	printf("*********0.exit********\n");
	printf("*********1.play********\n");
	printf("***********************\n");
}

void Game()
{
	char board[ROW][COL] = { 0 };

	InitBoard(board, ROW, COL);
	ShowBoard(board, ROW, COL);

	int res = 0;
	while (1)
	{
		
		PlayerMove(board, ROW, COL);
		ShowBoard(board, ROW, COL);
		res = IsWin(board, ROW, COL);
		if (res != ' ')  //  有人赢了
		{
			break;
		}


		CmptMove(board, ROW, COL);
		ShowBoard(board, ROW, COL);
		res = IsWin(board, ROW, COL);
		if (res != ' ')  //  有人赢了
		{
			break;
		}
	}
	if (res == 'Q')
		printf("平局!\n");
	if (res == 'X')
		printf("恭喜你赢了!\n");
	if (res == 'O')
		printf("电脑赢!\n");
}

int main()
{
	srand((unsigned)time(NULL));
	int input= 0;
	do
	{
		Menu();
		printf("请输入你的操作选项：");
		scanf("%d", &input);
		
		switch (input)
		{
			case 1:
				Game();
				break;
			case 0:
				printf("退出游戏！");
				break;
			default:
				break;
		}
	} while (input);


	system("pause");
	return 0;
}