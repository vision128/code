#define _CRT_SECURE_NO_WARNINGS 1
#include<windows.h>
#include<stdio.h>
//递归
int fac1(int n)
{
	if (n == 0 || n == 1)
	{
		return 1;
	}
	else
	{
		return fac1(n - 1)*n;
	}
}
//非递归
int fac2(int n)
{
	int i,s=1;
	if (n == 0 || n == 1)
	{
		return 1;
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			s = s*i;
		}
		return s;

	}
}

int main()
{
	int n;
	printf("请输入一个整数:  ");
	scanf("%d", &n);
	int res1 = fac1(n);
	int res2 = fac2(n);
	printf("%d!=%d\n", n, res1);
	printf("%d!=%d\n", n, res2);
	system("pause");
	return 0;
}

