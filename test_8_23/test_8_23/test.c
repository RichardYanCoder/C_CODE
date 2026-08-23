#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//编译与链接、预处理详解
//extern int Add(int x, int y);
//extern int g_val;
//int main()
//{
//    int a = 10;
//    int b = 20;
//    int sum = Add(a, b);
//    printf("%d\n", sum);
//    printf("g_val = %d\n", g_val);
//    return 0;
//}
//int g_val = 2022;
//int Add(int x, int y)
//{
//    return x + y;
//}
//int main()
//{
//    printf("file: %s\nline: %d\n", __FILE__, __LINE__);
//    printf("date: %s\ntime: %s\n", __DATE__, __TIME__);
//    return 0;
//}
//#include <stdio.h>
//#define MAX 1000
//#define reg register
//#define do_forever for(;;)
//#define CASE break;case
//// 多行宏，行尾加反斜杠换行
//#define DEBUG_PRINT printf("file:%s\tline:%d\t \
//date:%s\ttime:%s\n",\
//__FILE__, __LINE__, \
//__DATE__, __TIME__)
//int main()
//{
//    printf("%d\n", MAX);
//    reg int a = 10;
//    do_forever
//    {
//        break;
//    }
//    DEBUG_PRINT;
//    return 0;
//}
//#include <stdio.h>
//// 错误写法：末尾多了分号
//#define MAX 1000;
//int main()
//{
//    int condition = 1;
//    int max = 0;
//    if (condition)
//        max = MAX;
//    else
//        max = 0;
//    return 0;
//}
//#include <stdio.h>
//// 错误：参数不加括号
//#define SQUARE(x) x * x
//int main()
//{
//    int a = 5;
//    printf("%d\n", SQUARE(a + 1));
//    return 0;
//}
//#include <stdio.h>
//#define SQUARE(x) (x) * (x)
//int main()
//{
//    int a = 5;
//    printf("%d\n", SQUARE(a + 1));
//    return 0;
//}
//#include <stdio.h>
//// 错误：整体表达式外层无括号
//#define DOUBLE(x) (x) + (x)
//int main()
//{
//    int a = 5;
//    printf("%d\n", 10 * DOUBLE(a));
//    return 0;
//}
//#include <stdio.h>
//#define DOUBLE(x) ((x) + (x))
//int main()
//{
//    int a = 5;
//    printf("%d\n", 10 * DOUBLE(a));
//    return 0;
//}
//#include <stdio.h>
//#define MAX(a, b) ((a) > (b) ? (a) : (b))
//int main()
//{
//    int x = 5;
//    int y = 8;
//    int z = MAX(x++, y++);
//    printf("x=%d y=%d z=%d\n", x, y, z);
//    return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#define MALLOC(num, type) (type*)malloc((num) * sizeof(type))
//int main()
//{
//    int* p = MALLOC(10, int);
//    free(p);
//    return 0;
//}
//#include <stdio.h>
//#define PRINT(n) printf("the value of " #n " is %d\n", n)
//
//int main()
//{
//    int a = 10;
//    PRINT(a);
//    return 0;
//}
//#include <stdio.h>
//#define GENERIC_MAX(type) \
//type type##_max(type x, type y) \
//{ \
//    return x > y ? x : y; \
//}
//
//GENERIC_MAX(int)
//GENERIC_MAX(float)
//
//int main()
//{
//    int m = int_max(2, 3);
//    float fm = float_max(3.5f, 4.5f);
//    printf("%d\n%.2f\n", m, fm);
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int array[ARRAY_SIZE];
//    for (int i = 0; i < ARRAY_SIZE; i++)
//        array[i] = i;
//    for (int i = 0; i < ARRAY_SIZE; i++)
//        printf("%d ", array[i]);
//    return 0;
//}
//#include <stdio.h>
//#define __DEBUG__
//int main()
//{
//    int arr[10] = { 0 };
//    for (int i = 0; i < 10; i++)
//    {
//        arr[i] = i;
//#ifdef __DEBUG__
//        printf("%d\n", arr[i]);
//#endif
//    }
//    return 0;
//}
//#ifndef __TEST_H__
//#define __TEST_H__
//
//// 头文件内容
//void test();
//struct Stu
//{
//    int id;
//    char name[20];
//};
//#endif
//#pragma once
//void test();
//struct Stu
//{
//    int id;
//    char name[20];
//};