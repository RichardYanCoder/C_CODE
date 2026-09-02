#define  _CRT_SECURE_NO_WARNINGS
//累加练习
#include<stdio.h>
#include<string.h>
//double fun(int n)
//{
//	int i = 0;
//	double s = 0;
//	double t = 0;
//	for (i = 1;i <= n;i++)
//	{
//		double t = 2.0 * i;
//			s += (2 * i - 1) * (2 * i + 1) / (t * t);
//	}
//	return s;
//}
//int main()
//{
//	int n = 0;
//	do
//	{
//		printf("请输入项数n(n>0):\n");
//		scanf("%d",&n);
//	} while (n <= 0);
//	double res = fun(n);
//	printf("计算结果:%f\n",res);
//	return 0;
//}
//匹配字符串并返回公共字符串长度
//int fun(char s1[], char s2[])
//{
//	int max = 0;
//	int n = strlen(s1);
//	int m = strlen(s2);
//	int i = 0;
//	int j = 0;
//	int left_n = 0;
//	int left_m = 0;
//	int left_num = 0;//本轮剩余比较次数
//	int k = 0;
//	for (i = 0;i < n;i++)
//	{
//		for (j = 0;j < m;j++)
//		{
//			left_n = n - i;
//            left_m = m - j;
//			left_num = left_n < left_m ? left_n : left_m;//三目操作符
//			for (k = 0;k<left_num;k++)
//			{
//				if (s1[i + k]!=s2[j + k])
//					break;
//			}
//			max = k > max ? k : max;//max之前初始化为了0 ,大于0就更新
//		}
//	}
//	return max;
//}
//int main()
//{
//	char s1[100] = "qwertyuiop";
//	char s2[100] = "asdrtyukl";
//	int max;
//	max = fun(s1, s2);
//	printf("%d\n",max);
//	return 0;
//}
//找出二维数组每列元素的最大值，并顺序存放于形参的一维数组之中
//#define N 4
//void fun(int(*a)[N],int *b)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < N;i++)
//	{
//		b[i] = a[0][i];
//		for (j = 1;j < N;j++)
//		{
//			if (b[i] < a[j][i])
//			{
//				b[i] = a[j][i];
//			}
//		}
//	}
//}
//int main()
//{
//	//下面是原题给出的矩阵数据
//	int x[N][N] = {
//		{12,5,8,7},
//		{6,1,9,3},
//		{1,2,3,4},
//		{2,8,4,3}
//	};
//	int y[N] = {0};
//	int i = 0;
//	int j = 0;
//	printf("\nThe matrix:\n");
//	//打印 4*4 原始矩阵
//	for (i = 0;i < N; i++)
//	{
//		for (j = 0;j < N;j++)
//		{
//			printf("%4d", x[i][j]);
//		}
//		printf("\n");
//	}
//	fun(x,y);
//	//打印形参的一维数组
//	printf("\nThe result is:");
//	for (i = 0;i < N;i++)
//	{
//		printf("%3d",y[i]);
//	}
//	printf("\n");
//	return 0;
//}
//移动奇数下标的元素
//void fun(char* s)
//{
//	int i = 0;
//	int n = strlen(s);
//	int k;
//	if (n % 2 == 0)
//	{
//		k = n - 1;
//	}
//	else
//	{
//		k = n - 2;//找到最后一位奇数下标k
//	}
//	char temp = s[k];//找到后就保存下标k对应的字符
//	//其他奇数下标的处理
//	for (i = k - 2;i >= 1;i = i - 2)
//	{
//		s[i + 2] = s[i];
//	}
//	s[1] = temp;
//}
//int main()
//{
//	char str[80] = "abcdefg";
//	printf("原字符串是:%s\n",str);
//	fun(str);
//	printf("处理后:%s\n",str);
//	return 0;
//}