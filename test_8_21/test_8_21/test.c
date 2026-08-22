#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//struct Stu
//{
//    char name[20];
//    int age;
//    char sex[5];
//    char id[20];
//};
//int main()
//{
//    //按照结构体成员书写顺序初始化
//    struct Stu s = { "张三", 20, "男", "20230818001" };
//    printf("name: %s\n", s.name);
//    printf("age : %d\n", s.age);
//    printf("sex : %s\n", s.sex);
//    printf("id  : %s\n", s.id);
//    //指定成员名字初始化，赋值顺序可以打乱
//    struct Stu s2 = { .age = 18, .name = "lisi", .id = "20230818002", .sex = "女" };
//    printf("name: %s\n", s2.name);
//    printf("age : %d\n", s2.age);
//    printf("sex : %s\n", s2.sex);
//    printf("id  : %s\n", s2.id);
//	return 0;
//}
////错误写法：结构体内部存放结构体本体变量，无限嵌套 
///* struct Node
//{
//   int data;
//   struct Node next;
// }; */
// //正确写法：结构体内部存放同类型结构体指针 
//struct Node
//{
//    int data;
//    struct Node* next;
//};
//错误写法，typedef匿名结构体，内部不能直接使用Node别名
/*
typedef struct
{
    int data;
    Node* next;
}Node;
*/

//typedef搭配自引用的标准正确代码
//typedef struct Node
//{
//    int data;
//    struct Node* next;
//}Node;
//练习五 修改默认对齐数
//#pragma pack(1)//设置默认对齐数为1
//struct S
//{
//    char c1;
//    int i;
//    char c2;
//};
//#pragma pack()//取消设置的对齐数，还原编译器默认对齐数
//struct S
//{
//    int data[1000];
//    int num;
//};
////结构体值传参
//void print1(struct S s)
//{
//    printf("%d\n", s.num);
//}
////结构体地址传参
//void print2(struct S* ps)
//{
//    printf("%d\n", ps->num);
//}
//int main()
//{
//    struct S s = { {1,2,3,4}, 1000 };
//    print1(s);
//    print2(&s);
//    return 0;
//}
// char作为位段容器示例
//struct S
//{
//    char a : 3;
//    char b : 4;
//    char c : 5;
//    char d : 4;
//};
//// int作为位段容器示例
//struct A
//{
//    int _a : 2;
//    int _b : 5;
//    int _c : 10;
//    int _d : 30;
//};
//int main()
//{
//    // struct S测试
//    struct S s = { 0 };
//    s.a = 10;
//    s.b = 12;
//    s.c = 3;
//    s.d = 4;
//    printf("struct S大小：%d字节\n", sizeof(struct S));
//
//    // struct A测试，位段输入错误与正确写法
//    struct A sa = { 0 };
//    // scanf("%d", &sa._b); //错误，位段成员不能取地址
//
//    int temp = 0;
//    scanf("%d", &temp);
//    sa._b = temp; //借助普通变量中转赋值
//    printf("sa._b = %d\n", sa._b);
//    printf("struct A大小：%d字节\n", sizeof(struct A));
//    return 0;
//}
//union Un
//{
//    char c;
//    int i;
//};
//int main()
//{
//    union Un un;
//    un.i = 0x11223344;
//    printf("un.i = %x\n", un.i);
//    un.c = 0xaa;
//    printf("un.i = %x\n", un.i);
//    return 0;
//}
//union Un1
//{
//    char c[5];
//    int i;
//};
//union Un2
//{
//    short c[7];
//    int i;
//};
//int main()
//{
//    printf("Un1大小：%d\n", sizeof(union Un1));
//    printf("Un2大小：%d\n", sizeof(union Un2));
//    return 0;
//}
//#include <stdio.h>
//struct gift_list
//{
//    int stock_number;
//    double price;
//    int item_type;
//
//    union {
//        struct
//        {
//            char title[20];
//            char author[20];
//            int num_pages;
//        }book;
//        struct
//        {
//            char design[30];
//        }mug;
//        struct
//        {
//            char design[30];
//            int colors;
//            int sizes;
//        }shirt;
//    }item;
//};
//int main()
//{
//    struct gift_list g;
//    g.stock_number = 100;
//    g.price = 29.9;
//    g.item_type = 1;
//    //item_type等于1代表图书
//    g.item.book.num_pages = 300;
//    return 0;
//}
//int check_sys()
//{
//    union
//    {
//        int i;
//        char c;
//    }un;
//    un.i = 1;
//    return un.c;
//}
//int main()
//{
//    int ret = check_sys();
//    if (ret == 1)
//    {
//        printf("当前机器是小端存储\n");
//    }
//    else
//    {
//        printf("当前机器是大端存储\n");
//    }
//    return 0;
//}
////星期枚举，默认从0开始
//enum Day
//{
//    Mon,
//    Tues,
//    Wed,
//    Thur,
//    Fri,
//    Sat,
//    Sun
//};
////性别枚举
//enum Sex
//{
//    MALE,
//    FEMALE,
//    SECRET
//};
////颜色枚举，手动指定常量数值
//enum Color
//{
//    RED = 1,
//    GREEN = 2,
//    BLUE = 4
//};
//
//int main()
//{
//    enum Day day = Fri;
//    printf("Fri对应的数值：%d\n", day);
//
//    enum Sex s = MALE;
//    printf("MALE对应的数值：%d\n", s);
//
//    enum Color color = BLUE;
//    printf("BLUE对应的数值：%d\n", color);
//
//    printf("枚举类型所占字节：%d\n", sizeof(enum Day));
//    return 0;
//}
