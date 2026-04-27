#define  _CRT_SECURE_NO_WARNINGS
//指针(3)
#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* p1 = &arr[0];
//	int* p2 = arr;//数组名是数组首元素的地址
//	return 0;
//}
//数组名的理解
//int main()
//{
//	int arr[10] = { 0 };
//	printf("arr       = %p\n",arr);
//	printf("arr+1     = %p\n",arr+1);
//	//数组名就是数组首元素(第一个元素)的地址,类型是int*,+1就是跳过一个整型
//	printf("&arr[0]   = %p\n",&arr[0]);
//	printf("&arr[0]+1 = %p\n",&arr[0] + 1);
//	printf("&arr      = %p\n",&arr);
//	printf("&arr+1    = %p\n", &arr+1);
//	//printf("%zd\n",sizeof(arr));//求大小 40
//	//return 0;
//}
//sizeof中单独放数组名，这里的数组名表示整个数组，计算的是整个数组的大小，单位是字节.
//&数组名表示整个数组，取出的是整个数组的地址
//使用指针访问数组
//1.数组在内存中是连续存放的。2.指针的+-整数运算,方便我们获得每一个元素的地址
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//输入10个值
//	int* p = arr;
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		//输入一个值
//		scanf("%d", p+i);//p+i == &arr[i]
//	}
//	//输出10个值
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d\n",*(p+i));
//	}
//	return 0;
//}
//那能不能写成arr+i或arr[i]或p[i]呢?可以
//数组就是数组，是一块连续的空间(数组的大小和数组元素个数和元素类型都有关系)
//指针(变量)就是指针(变量)，是一个变量(4/8个字节)
//所以数组和指针不等价
//数组和指针的联系:数组名是首元素的地址,可以使用指针来访问数组
//那可不可以写*(i+arr)?可以
//那可不可以i[arr]?也可以
//[]是下标引用操作符,所以arr[i] = i[arr];*(arr+i) = *(i+arr)
//一维数组传参的本质
//第一种方式
//void Print(int arr[10], int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d",arr[i]);
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Print(arr,sz);
//	return 0;
//}
//第二种方式
//数组传参的时候，形参可以写成数组形式
//但是本质上还是指针变量
//数组传参的本质是传递了数组首元素的地址
//所以形参访问的数组和实参的数组是同一个数组
//形参的数组是不会单独再创建数组空间的
//所以形参的数组是可以省略数组大小的
//void Print(int arr[10])//int*arr
//{
//	int sz = sizeof(arr)/sizeof(arr[0]);//得不到元素个数的
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d",arr[i]);
//	}
//}
//void Print(int* p,int sz)
//{
//	int i = 0;
//	for (i = 0;i <sz;i++)
//	{
//		printf("%d",*(p+i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Print(arr,sz);//arr数组名就是数组首元素的地址
//	//传过去的是地址,接受应该用指针
//	return 0;
//}//只打印出了1,调试找问题
//冒泡排序:两两相邻的元素比较
//很多数据需要排序,排序的算法很多:冒泡，插入，选择,快速,希尔,堆排序......
//void bubble_sort(int arr[], int sz)
//{
//	//先解决趟数
//	int i = 0;
//	for (i = 0;i < sz - 1;i++)
//	{
//		//假设已经有序
//		int flag = 1;
//		//一趟排序的过程
//		int j = 0;
//		for (j = 0;j <sz-1-i ;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d",arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	//排序
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	print_arr(arr,sz);
//	return 0;
//}
//二级指针
//int main()
//{
//	int a = 10;
//	int* p = &a;//p是一级指针
//	int** pp = &p;//二级指针
//	//pp的类型是int** -- int** 二级指针类型
//	//*说明pp是指针变量;int*说明pp执行的p的类型是int*的
//	int*** ppp = &pp;//二级指针足矣,这种只是语法可以
//	//......
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int** pp = &p;
//	printf("%p\n",*pp);
//	printf("%p\n",&a);//一样
//	printf("%p\n",**pp);
//	printf("%p\n",a);//也一样
//	return 0;
//}
//指针数组
//是数组,存放指针的数组
//指针数组模拟二维数组
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	//如何管理?
//	int* arr[] = { arr1,arr2,arr3 };
//	//打印数组
//	int i = 0;
//	for (i = 0;i < 3;i++)
//	{
//		int j = 0;
//		for (j = 0;j < 5;j++)
//		{
//			printf("%d", arr[i][j]);
//			//arr1[j] = *(arr1+j)
//			//指针运算
//		}
//		printf("\n");
//	}
//	return 0;
//}
//字符指针变量
//int main()
//{
//	//char ch = 'w';
//	//char* pc = &ch;//pc就是一个指针变量
//	char arr[10] = "abcdef";
//	char* p1 = arr;
//	*p1 = 'w';//可以
//	const char* p2 = "abcdef";
//	//*p2 = 'w';//访问冲突,常量字符串无法修改,编译器报错
//	//const及时阻止
//	//%s打印字符串的时候,需要提供起始地址
//	printf("%s\n",p1);
//	printf("%s\n",p2);
//	return 0;
//}
//指针(4)
//数组指针变量:存放数组的地址,能够指向数组的指针变量
//int main()
//{
//	int a = 10;
//	int *pa = &a;//整型指针
//	char ch = 'w';
//	char* pc = &ch;//字符指针
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;//取出的是数组的地址
//	//arr -- 数组首元素的地址
//	//int* p1[10];//p1是一个指针数组:存放指针的数组
//	//int(*p2)[10];//p2是指针变量,指向的是数组--数组指针
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int*p1 = arr;
//	//int*   int*
//	printf("%p\n",p1);
//	printf("%p\n",p1+1);
//	//跳过四个字节
//	int(*p2)[10] = &arr;
//	//int(*)[10]   int(*)[10]
//	printf("%p\n",p2);//&arr
//	printf("%p\n",p2+1);//&arr+1
//	//跳过四十个字节
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int*p = arr;
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d\n",*p);
//		p++;
//	}
//	return 0;
//}
//不好的例子
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;
//	//&和*是可以被认为互相抵消的
//	//*&arr == arr
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d",(*p)[i]);
//	}
//	return 0;
//}
//二维数组传参的本质
//void print(int arr[3][5],int r,int c)
//{
//	int i = 0;
//	for (i = 0;i < r;i++)
//	{
//		int j = 0;
//		for (j = 0;j<c;j++)
//		{
//			printf("%d", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print(int (*arr)[5], int r, int c)
//{
//	int i = 0;
//	for (i = 0;i < r;i++)
//	{
//		int j = 0;
//		for (j = 0;j < c;j++)
//		{
//			printf("%d", *(*(arr + i) + j));//arr[i][j]
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	//数组名是数组首元素的地址
//	//1.&数组名  2.sizeof(数组名)表示的不是数组首元素的地址
//	print(arr,3,5);
//	return 0;
//}
//二级指针变量是用来存放一级指针变量的地址
//int main()
//{
//	int a = 0;
//	int* pa = &a;
//	int** ppa = &pa;
//	return 0;
//}
//函数指针变量
//函数指针变量的创建
//int Add(int x, int y)
//{
//	return x + y;
//}
//char* test(char c, int n)
//{
//	//......
//}
//int main()
//{
//	//printf("&Add = %p\n", &Add);
//	//printf("Add = %p\n", Add);
//	//函数名和&函数名都是函数的地址,没有区别
//	//int (*pf)(int,int) = &Add;//pf是专门用来存放函数的地址的,pf就是函数指针变量
//	char*(*p)(char,int) = &test;
//	return 0;
//}
//函数指针变量的使用
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int(*pf)(int,int) = Add;
//	//int c = Add(2, 3);
//	//printf("%d\n",c);
//	int d = (*pf)(3, 4);//函数指针变量调用
//	return 0;
//}
//typedef关键字:类型重定义
//typedef unsigned int u_int;
//int main()
//{
//	u_int a1;
//	unsigned int a2;//两个类型一个意思
//	return 0;
//}
//typedef int* pint_t;
//int main()
//{
//	pint_t p1;
//	int* p2;
//	return 0;
//}
//函数指针数组
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int (*pf1)(int,int) = Add;//pf1是函数指针变量
//	int (*pfarr[4])(int, int) = {Add,Sub,Mul,Div};//pfarr是函数指针数组
//	return 0;
//}
//转移表
//计算器:完成整数的加减乘除
//void menu()
//{
//	printf("***********************\n");
//	printf("******1.add 2.sub******\n");
//	printf("******3.mul 4.div******\n");
//	printf("******0.exit     ******\n");
//	printf("***********************\n");
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int z = 0;
//	//函数指针的数组
//	int(*pfArr[5])(int, int) = {0,Add,Sub,Mul,Div};
//	//                          0   1   2   3   4
//	do
//	{
//		menu();
//		printf("请选择:");
//		scanf("%d",&input);//3
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数:");
//			scanf("%d %d", &x, &y);
//			z = pfArr[input](x, y);
//			printf("%d\n", z);
//		}
//		else if (input == 0)
//		{
//			printf("退出计算器\n");
//		}
//		else
//		{
//			printf("输入错误,重新输入\n");
//		}
//	} while (input);
//	return 0;
//}
