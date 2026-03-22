#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//指针(2)下篇
//指针-指针
//指针-指针是什么?之前的学习可以总结出:指针1+整数 = 指针2,可不可以交换一下位置
//交换位置后:|指针2 - 指针1|= 整数,也就得到了两个指针之间的元素个数
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%zd\n",&arr[9] - &arr[0]);
//	return 0;
//}//得出9
//如果是小地址减大地址呢?之前学过，数组随着下标的增长，地址是由低到高变化的
//如果原代码中下标对换，会得到-9
//注意:指针-指针计算的条件是一定是:两个指针指向了同一块空间
//下面是错误示例
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[5] = { 0 };
//	printf("%d\n", &ch[4] - &arr[6]);
//	return 0;
//}
//int my_strlen(char*str)
//{
//	char* start = str;
//	while (*str != '\0')
//		str++;
//	return str - start;//指针-指针
//}
//int main()
//{
//	strlen - 求字符串的长度 , 统计字符串中\0之前出现的字符个数
//	char arr[] = "abcdef";//得出6
//	arr里面存的内容:[a b c d e f \0]
//
//	int len = my_strlen(arr);//数组名arr是数组首元素的地址 arr == &arr[0]
//	printf("%d\n",len);
//	return 0;
//}
//指针的关系运算:指针和指针比较大小
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//10
//	int* p = arr;//&arr[0]
//	while (p < arr + sz)
//	{
//		printf("%d",*p);
//		p++;
//	}
//	return 0;
//}
//野指针:指针指向的位置是不可知的，随机的，不确定的，没有明确限制的
//成因1:指针变量没有初始化
//以下是两个截然不同的代码
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	return 0;
//}
//int main()
//{
//	int* p;
//	*p = 20;
//	//p是一个局部变量，一个局部变量不初始化，默认存的是随机值
//	return 0;
//}
//成因2:指针越界
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int *p = arr;//p此时不是野指针
//	  
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0;i <= sz;i++)//11次，越界
//	{
//		printf("%d",*p);
//		p++;
//	}
//	return 0;
//}
//成因3:指针指向的空间释放
//int* test()
//{
//	int a = 10;
//	return &a;
//}//离开test(),a空间还给操作系统了
//int main()
//{
//	int *p = test();//野指针
//	printf("%d\n",*p);//非法访问
//	return 0;
//}
//如何避免野指针
//指针要初始化:明确知道指针应该指向哪里，就给初始化一个明确的地址
//如果现在还不知道应该指向哪里，那就初始化空指针NULL，但
// 这个地址无法使用
//int main()
//{
//	//int a = 10;
//	//int* p1 = &a;
//	//*p1 = 20;
//
//	//int* p2 = NULL;
//	//*p2 = 100;//err错误
//	return 0;
//}
//小心指针越界
//指针变量不再使用时，及时置NULL，指针使用之前检查有效性
//避免返回局部变量的地址
//assert断言:用于在运行时确保程序符合指定条件，如果不符合，就报错中止运行
#include<assert.h>
//int main()
//{
//	int a = 10;
//	int* p = NULL;
//	assert(p!= NULL);
//	*p = 20;
//	printf("%d\n",*p);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	assert(n > 3);
//	return 0;
//}
//1.assert出现错误的时候,直接会报错,指明在什么文件,哪一行
//2.assert不想用时可以直接关掉，可以直接在#include<assert.h>之前定义一个宏NDEBUG
//指针的使用和传址调用
//写一个函数,交换两个整数的内容
//void Swap2(int *pa,int *pb)
//{
//	int tmp = 0;
//	tmp = *pa;//tmp = a
//	*pa = *pb;//a = b
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前:a = %d b = %d\n", a, b);
////实参传给形参时，形参创建了自己独立的空间，形参是实参的一份临时拷贝
////虽然形参得到了实参的值，但是形参和实参是独立的空间，对形参的修改不会影响实参
//	Swap2(&a, &b);//传值调用
//	printf("交换后:a = %d b = %d\n", a, b);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int *p = &a;
//	*p = 20;
//	return 0;
//}//p和a建立了联系，给予我们修改上述代码的启发







