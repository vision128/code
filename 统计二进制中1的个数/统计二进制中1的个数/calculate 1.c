#define _CRT_SECURE_NO_WARNINGS 1
#include<windows.h>
#include<stdio.h>


int Cal1(int num)
{
	int count = 0;
	for (int i = 0; i < 32; i++)
	{

		if ((num >> i) % 2 == 1)
			count++;
	}
	return count;
}
int Cal2(int num)
{
	int count = 0;
	while (num)
	{
			count++;
			num = num&(num - 1);
	}
	return count;
}
int main()
{
	int num;
	printf("请输入一个整数：");
	scanf("%d", &num);
	int res1 = Cal1(num);
	int res2 = Cal2(num);
	printf("%d的二进制形式中1的个数有%d个\n", num, res1);
	printf("%d的二进制形式中1的个数有%d个\n", num, res2);
	system("pause");
	return 0;
}