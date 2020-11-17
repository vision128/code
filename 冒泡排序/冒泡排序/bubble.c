#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

void BubbleSort(int arr[],int len)
{
	int i = 0;
	int j = 0;
	for ( i = 0; i < len - 1; i++)
	{
		for (j = 0; j < len - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

}

int main()
{
	int arr[5] = { 23, 54, 64, 12, 67 };
	int len = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr,len);
	for (int i = 0; i < len; i++)
	{
		printf("%d  ", arr[i]);
	}
	system("pause");
	return 0;
}