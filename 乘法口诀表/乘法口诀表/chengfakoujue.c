#define _CRT_SECURE_NO_WARNINGS 1
#include<Windows.h>
#include<stdio.h>
void Table(int n)
{
	int i,j;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (i >= j)
			{
				printf("%d * %d = %2d ", j, i, i*j);
			}
			else
				printf("              ");
			if (j == n)
				printf("\n");
		}
	}
}


void main()
{
	int n;
	printf("请输入一个整数：");
	scanf("%d", &n);
	Table(n);
	system("pause");
}









































/*int main()
{
	int i, j;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			if (i <= j)
				printf("%d * %d= %2d  ", i, j, i*j);
			else
				printf("           ");
			if (j == 9)
			{
				printf("\n");
			}
		}
	}

	system("pause");
	return 0;
}*/