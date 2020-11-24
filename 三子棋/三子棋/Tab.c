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
		if (res != ' ')  //  ����Ӯ��
		{
			break;
		}


		CmptMove(board, ROW, COL);
		ShowBoard(board, ROW, COL);
		res = IsWin(board, ROW, COL);
		if (res != ' ')  //  ����Ӯ��
		{
			break;
		}
	}
	if (res == 'Q')
		printf("ƽ��!\n");
	if (res == 'X')
		printf("��ϲ��Ӯ��!\n");
	if (res == 'O')
		printf("����Ӯ!\n");
}

int main()
{
	srand((unsigned)time(NULL));
	int input= 0;
	do
	{
		Menu();
		printf("��������Ĳ���ѡ�");
		scanf("%d", &input);
		
		switch (input)
		{
			case 1:
				Game();
				break;
			case 0:
				printf("�˳���Ϸ��");
				break;
			default:
				break;
		}
	} while (input);


	system("pause");
	return 0;
}