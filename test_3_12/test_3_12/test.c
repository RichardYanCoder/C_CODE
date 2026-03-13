#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//指针(2)
//void*指针
//指针类型:char*- 指向字符的指针  1  short*- 指向短整型的指针  2
//         int*- 指向整形的指针   4 float*- 指向单精浮点型的指针  4......
//void* -- 无具体类型的指针(泛型指针)
//int main()
//{
//	int a = 0;
//	//char* p = &a;//int*
//	//类型不兼容
//	float f = 0.0f;
//	void* p = &a;//什么类型都可以接受
//	p = &f;//float*
//
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	void* p = &a;
//	//*p = 20;//非法，无具体类型，不知道访问几个字节
//	return 0;
//}
//const修饰指针
//4.1const修饰变量
//int main()
//{
//	const int a = 10;//a具有常属性，不能被修改，可以叫常变量
//	//a = 20;
//	//int arr[a];//本质还是变量
//	//printf("%d\n",a);//变量想改就改
//	return 0;
//}
//在C++中，const修饰的变量就是常量，不是常变量
//int main()
//{
//	const int a = 10;
//	//a = 20;//err
//	//限制规则
//	int* p =&a;
//	*p = 0;
//	printf("a = %d\n",a);
//	return 0;
//}
//4.2const修饰指针变量
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//p = &b;//err
//	int * const p = &a;//限制p本身
//	return 0;
//}
////const修饰指针变量的时候,放在*的右边
////const限制的是指针变量本身,指针变量不能再指向其他变量了
////但是可以通过指针变量,修改指针变量指向的内容
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int const* p = &a;
//	//p = &b;//ok
//	//*p = 100;//err
//	//const修饰指针变量时,放在*的左边,限制的是指针指向的内容,不能通过指针来修改
//	//但是可以修改指针变量本身的值(修改的是指针变量的指向)
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 100;
//	int const* const p = &a;
//	//p = &b;//err
//	//*p = 0;//err
//	return 0;
//}
//5.指针运算
//指针的作用就是访问内存,需要更好地,效率更高地访问内存
//1.指针+-整数
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//打印数组的内容
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d",arr[i]);
//	}
//	return 0;
//}
//指针的方式
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int*p = &arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d\n",*p);
//		p++;
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = &arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d\n", *(p+i));
//		
//	}
//	return 0;
//}



