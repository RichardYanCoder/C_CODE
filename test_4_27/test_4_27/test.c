#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//指针(5)
//回调函数:一个通过函数指针调用的函数
//qsort使用举例
//使用qsort函数排列整型数据
//qsort函数用来排序,它是库函数,底层使用的是快速排序的方式
//写一个冒泡排序的函数,对一组整型数据进行排序,排序为升序
//void bubble_sort(int arr[], int sz)
//{
//	//趟数
//	int i = 0;
//	for (i = 0;i < sz - 1;i++)
//	{
//		//一趟内部的两两比较
//		int j = 0;
//		for (j = 0;j < sz-1-i;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//void print_arr(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d",arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	//排为升序
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	print_arr(arr, sz);
//	return 0;
//}
//这个代码存在问题:这个函数只能排序整型数据
//如果要排序其他类型的数据,就需要重新写一个函数,这个函数的代码和上面的函数几乎一样,只是数据类型不同
//如果把两个比较的方法封装成一个函数,然后把函数的地址传给排序函数，那么这个函数就可以处理任意类型的数据
// 参数 1: void *base
// 含义: 指向待排序数组的首元素地址
// 类型: void* 万能指针，可以接收任何类型的数组地址
// 参数 2: size_t nmemb
// 含义: 数组中元素的总数量
// 类型: size_t，一个无符号整数类型，足够容纳数组长度
// 参数 3: size_t size
// 含义: 数组中每个元素的字节大小
// 类型: size_t
// 参数 4: int (*compar)(const void *, const void *)
// 含义: 一个函数指针，指向用户定义的比较函数
// 作用: qsort 通过调用此函数来判断两个元素的大小关系，从而决定排序顺序
// 比较函数参数:
//   - const void *a: 指向数组中第一个待比较元素的指针
//   - const void *b: 指向数组中第二个待比较元素的指针
//   - const 修饰符表明函数内部不应修改这两个指针指向的数据
// 比较函数返回值 (int):
//   - 小于 0: 表示 a 指向的元素应排在 b 指向的元素之前 (a < b)
//   - 等于 0: 表示 a 和 b 指向的元素相等，排序顺序无关紧要
//   - 大于 0: 表示 a 指向的元素应排在 b 指向的元素之后 (a > b)
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//}
//int cmp_int(const void* e1, const void* e2)
//{
//	/*if (*(int*)e1 > *(int*)e2)
//        return 1;
//	else if (*(int*)e1 == *(int*)e2)
//        return 0;
//	else
//        return -1;*/
//    return *(int*)e1 - *(int*)e2;
//}
//void test1()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr,sz,sizeof(arr[0]), cmp_int);
//	print_arr(arr, sz);
//}
//int main()
//{
//	//写一段代码使用qsort函数对整型数据进行排序
//	test1();
//	return 0;
//}
//想排降序
//int cmp_int_desc(const void* e1, const void* e2)
//{
//	return *(int*)e2 - *(int*)e1;
//}
//使用qsort排序一下结构体数据
//struct Stu
//{
//	char name[20];
//	int age;
//};
//这里的两个结构体元素怎么比较大小？
//1.按照名字比较——字符串比较——strcmp 2.按照年龄比较——整型比较
//strcmp 是对应着字符串中的字符的ASCII码进行比较的，所以返回值是int
//strcmp 返回值:
//   - 小于 0: 1 处的字符比 2 处的字符小
//   - 等于 0: 1 处的字符和 2 处的字符相等
//   - 大于 0: 1 处的字符比 2 处的字符大
//.和->都是结构体成员访问操作符
//结构体变量.成员名
//结构体指针.成员名
//结构体指针->成员名
//int cmp_stu_by_name(const void* p1, const void* p2)
//{
//	return strcmp(((struct Stu*)p1)->name, ((struct Stu*)p2)->name);
//}
//int cmp_stu_by_age(const void* p1, const void* p2)
//{
//	return ((struct Stu*)p1)->age - ((struct Stu*)p2)->age;
//}
//void test2()
//{ 
//	struct Stu arr[3] = { {"zhangsan",20},{"lisi",35},{"wangwu",18} };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//qsort(arr,sz,sizeof(arr[0]), cmp_stu_by_name);
//    qsort(arr,sz,sizeof(arr[0]), cmp_stu_by_age);
//}
//int main()
//{
//	test2();
//	return 0;
//}
