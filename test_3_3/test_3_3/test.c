#define  _CRT_SECURE_NO_WARNINGS
//函数递归
#include<stdio.h>
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}
//举例:求n的阶乘(不考虑溢出)
//n == 0 ,n! = 1;其余n! = n*(n-1)!
//int Fact(unsigned int n)
//{
//	if (n == 0)
//		return 1;
//	else//n>0
//		return n * Fact(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);//4 24
//	int ret = Fact(n);
//	printf("%d\n",ret);
//	return 0;
//}
//大事化小;递归需要条件，停下来也需要递归;不断地逼近跳出条件
//举例二:顺序打印一个整数的每一位
//void Print(int n)
//{
//	if (n > 9)
//	{
//		Print(n / 10);
//	}
//		printf("%d", n % 10);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Print(n);
//	return 0;
//}
//小心栈溢出
//递归和迭代:迭代--把一些事情重复做
//依旧是求n的阶乘
//int Fact(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1;i <= n;i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int ret = Fact(n);
//	printf("%d\n",ret);
//	return 0;
//}
//需要优化，递归消耗时间长，可以用迭代，迭代的效率一般会更高
//递归的不恰当书写，会导致无法接受的一些后果，请使用迭代
//举例三:求第n个斐波那契数
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n>=3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int ret = Fib(n);
//	printf("%d\n",ret);
//	return 0;
//}
//可以改成尾递归，就不存在效率问题了
