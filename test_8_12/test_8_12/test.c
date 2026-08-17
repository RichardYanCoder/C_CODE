#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//memcpy的使用和模拟实现
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 0 };
//	memcpy(arr2, arr1, 20);
//	int i = 0;
//	for (i = 0;i < 9;i++)
//	{
//		printf("%d",arr2[i]);
//	}
//	return 0;
//}
//打印结果：1234500000
#include<assert.h>
//void* my_memcpy(void* dst, const void* src, size_t count)
//{
//	void* ret = dst;
//	assert(dst);
//	assert(src);
//	while (count--)
//	{
//		*(char*)dst = *(char*)src;
//		dst = (char*)dst + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 0 };
//	my_memcpy(arr2, arr1, 20);
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d",arr2[i]);
//	}
//	return 0;
//}
//memmove的使用和模拟实现
#include<stddef.h>
//void* my_memmove(void* dst, const void* src, size_t count)
//{ 
//	assert(dst);
//    assert(src);
//	void* ret = dst;
//	if (dst <= src || *(char*)dst >= *(char*)src + count)
//	{
//		while (count--)
//		{
//			*(char*)dst = *(char*)src;
//			dst = (char*)dst + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		dst = (char*)dst + count - 1;
//		src = (char*)src + count - 1;
//		while (count--)
//		{
//			*(char*)dst = *(char*)src;
//            dst = (char*)dst - 1;
//            src = (char*)src - 1;
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	memmove(arr1+2,arr1,20);
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d",arr1[i]);
//	}
//	return 0;
//}
//memset函数的使用
//int main()
//{
//	char str[] = "hello world";
//	memset(str, 'x', 6);
//	printf(str);
//	return 0;
//}
//memcmp函数的使用
int main()
{
	char buffer1[] = "DWga0tP12df0";
	char buffer2[] = "DWGAOTP12DFO";
	int n;
	n = memcmp(buffer1,buffer2,sizeof(buffer1));
	if (n > 0)
		printf("'%s' is greater than '%s'.\n", buffer1, buffer2);
	else if (n < 0)
		printf("'%s' is less than '%s'.\n", buffer1, buffer2);
	else
		printf("'%s' is the same as '%s'.\n",buffer1,buffer2);
	return 0;
}