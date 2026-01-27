#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	char ch[5][8];
//	float math[4][20];
//	return 0;
//}
//int main()
//{
//	int data[3][5] = { 1,2,3 };
//	int data[3][5] = {0};
//	int data[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7 };//完全初始化
//	int data[3][5] = { {1,2}, {3,4}, {5,6} };//指定行
//	行可以省略，列不行
//	行数与后面的元素相应
//	return 0;
//}
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7, };
//	//打印所有元素
//	int i = 0;
//	for (i = 0;i < 3;i++)
//	{
//		int j = 0;
//		for (j = 0;j < 5;j++)
//		{
//			printf("%d",arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][5] = { 0 };
//	//输入
//	int i = 0;
//	for (i = 0;i < 3;i++)
//	{
//		int j = 0;
//		for (j = 0;j < 5;j++)
//		{
//			scanf("%d",&arr[i][j]);
//		}
//	}
//	//打印所有元素
//	for (i = 0;i < 3;i++)
//	{
//		int j = 0;
//		for (j = 0;j < 5;j++)
//		{
//			printf("%d", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7 };
//	//打印所有元素
//	int i = 0;
//	for (i = 0; i<3 ; i++)
//	{
//		int j = 0;
//		for (j = 0;j < 5;j++)
//		{
//			printf("%d", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "********************";
//
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s", arr2);
//		Sleep(500);
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s",arr2);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int flag = 0;
//	
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
// 		}
//		else
//		{
//			flag = 1;
//			printf("找到了，下标是%d\n", arr[mid]);
//			break;
//		}
//	}
//	if (flag == 0)
//	printf("找不到\n");
//
//	return 0;
//}