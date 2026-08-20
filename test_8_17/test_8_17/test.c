#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//百度笔试题：简述大端字节序和小端字节序的概念，并设计一个小程序来判断当前机器的字节序
//int check_sys()
//{
//	int i = 1;
//	return *(char*)&i;
//}
//int main()
//{
//	int ret = check_sys();
//	if(ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}
//有符号char类型提升至无符号整型
//int main()
//{
//	char a = 128;
//	printf("%u\n", a);
//	return 0;
//}
//#include <string.h>
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0;i < 1000;i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d",strlen(a));
//	return 0;
//}
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//}
//浮点数在内存中的存储方式
int main()
{
	int n = 9;
	float *pFloat = (float *)&n;
	printf("n的值为：%d\n",n);
	printf("*pFloat的值为：%f\n",*pFloat);
	
	*pFloat = 9.0;
	printf("num的值为：%d\n",n);
    printf("*pFloat的值为：%f\n",*pFloat);
    return 0;
}