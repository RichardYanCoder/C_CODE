#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h>
//字符分类函数：字符串中的小写字母转大写
//int main()
//{
//	int i = 0;
//	char str[] = "Test String.\n";
//	char c;
//	while (str[i])
//	{
//		c = str[i];
//		if (islower(c))
//		{
//			c -= 32;
//		}
//		putchar(c);
//		i++;
//	}
//	return 0;
//}
//字符转换函数：改进上面的代码
//int main()
//{
//	int i = 0;
//    char str[] = "Test String.\n";
//	char c;
//    while (str[i])
//    {
//        c = str[i];
//        if (islower(c))
//            c = toupper(c);
//        putchar(c);
//        i++;
//    }
//    return 0;
//}
//strlen的使用和模拟实现
//方法一：计数器方式
#include<string.h>
#include<assert.h>
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str);
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()	
//{
//	char arr[] = "hello";
//	int len = my_strlen(arr);
//	printf("%d\n",len);
//	return 0;
//}
//递归指针偏移版
//int my_strlen(const char *str)
//{
//	assert(str);
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + my_strlen(str + 1);
//	}
//}
//int main()
//{
//	char str[] = "abc";
//	int len = my_strlen(str);
//	printf("%d\n",len);
//	return 0;
//}
//方式三：指针相减
//int my_strlen(const char* str)
//{
//	assert(str);
//	char* p = str;
//	while (*p != '\0')
//	{
//		p++;
//	}
//	return p - str;
//}
//int main()
//{
//	char str[] = "abcde";
//	int len = my_strlen(str);
//	printf("%d\n",len);
//	return 0;
//}
//strcpy函数的使用与模拟实现
//char* my_strcpy(char* dest, const char* src)
//{
//    char* ret = dest;
//    assert(dest != NULL);
//    assert(src != NULL);
//
//    while ((*dest++ = *src++))
//    {
//        ;
//    }
//    return ret;
//}
//int main()
//{
//	char arr[30] = {0};
//	const char str_src[] = "hello world";
//	char* res = my_strcpy(arr,str_src);
//	printf("%s\n",res);
//	return 0;
//}
//strcat函数的使用与模拟实现
//char* my_strcat(char* dest, const char* str)
//{
//    assert(dest != NULL);
//    assert(str != NULL);
//    char* ret = dest;
//    while (*dest)
//    {
//        dest++;
//    }
//    while ((*dest++ = *str++))
//    {
//        ;
//    }
//    return ret;
//}
//int main()
//{
//    char arr[50] = "hello";
//    const char str[] = "world";
//    char *res = my_strcat(arr,str);
//    printf("%s\n",res);
//    return 0;
//}
//strcmp函数的使用与模拟实现
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//        str1++;
//        str2++;
//	}
//	return *str1 - *str2;
//}
//int main()
//{
//	char arr1[] = "abcde";
//	char arr2[] = "abcf";
//	int res = strcmp(arr1,arr2);
//	printf("%d\n",res);
//	return 0;
//}
//strstr函数的使用与模拟实现
//char* my_strstr(const char* str1, const char* str2)
//{
//	char* cp = (char*)str1;
//	char *s1, *s2;
//	if (!*str2)
//		return (char*)str1;
//	while (*cp)
//    { 
//        s1 = cp;
//        s2 = (char*)str2;
//		while (*s1 && *s2 && !(*s1 - *s2))
//        {
//            s1++;
//            s2++;
//        }
//        if (!*s2)
//            return cp;
//        cp++;
//    }
//	return NULL;
//}
//int main()
//{
//	char arr[] = "This is a simple string";
//	char* ret;
//    ret = my_strstr(arr,"simple");
//	if (ret != NULL)
//	{
//        printf("%s\n",ret);
//	}
//	else
//	{
//		printf("Not found\n");
//	}
//	return 0;
//}
//strtok函数的使用
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char arr[] = "192.168.6.111";
//    char* sep = ".";
//    char* str = NULL;
//    for (str = strtok(arr, sep); str != NULL; str = strtok(NULL, sep))
//    {
//        printf("%s\n", str);
//    }
//    return 0;
//}
//strerror的使用
//#include<errno.h>
//#include <errno.h>
//#include <string.h>
//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    // 遍历错误码0到10
//    for (i = 0; i <= 10; i++)
//    {
//        // 将数字错误码转为文字并打印
//        printf("%d : %s\n", i, strerror(i));
//    }
//    return 0;
//}