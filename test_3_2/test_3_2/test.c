#define  _CRT_SECURE_NO_WARNINGS
//VS使用调试技巧
//bug,调试
#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		printf("hehe\n");
//	}
//	for (i = 0;i < 10;i++)
//	{
//		printf("haha\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };6y
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		arr[i] = i + 1;
//	}
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d",arr[i]);
//	}
//	return 0;
//}
//求1!+2!+3!+4!+...10!和
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1;n <= 3;n++)
//	{
//		ret = 1;
//		for (i = 1;i <= n;i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//    return 0;
//}
//出错了，预期是9，代码有问题，如何调试
//照着程序走，看程序有没有按照我们预期的方式在走
//如果没有按照预期走，代码有问题
//优化
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1;n <= 3;n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//    return 0;
//}
//改代码

int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//0-9
	for (i = 0; i <= 12; i++)
	{
		arr[i] = 0;
		printf("hehe\n");
	}

	return 0;
}
//为什么会死循环?x86

