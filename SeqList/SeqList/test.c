#define  _CRT_SECURE_NO_WARNINGS
#include"SeqList.h"
void SLTest01()
{
	SL sl;
	SLInit(&sl);
	//增删查改操作
	//测试尾插
	SLPushBack(&sl, 1);
	SLPushBack(&sl, 2);
	SLPushBack(&sl, 3);
	SLPushBack(&sl, 4);
    SLPrint(sl);
	//SLPushFront(&sl, 5);
	//SLPushFront(&sl, 6);
	SLPopBack(&sl);
    SLPrint(sl);
	SLPopBack(&sl);
	SLPrint(sl);
	SLPopBack(&sl);
	SLPrint(sl);
	SLPopBack(&sl);
	SLPrint(sl);
	//SLPopFront(&sl);
	//SLPrint(sl);
	//SLPopFront(&sl);
	//SLPrint(sl);
	//SLPopFront(&sl);
	//SLPrint(sl);
	//SLPopFront(&sl);
	//SLPrint(sl);
	SLDestroy(&sl);
}
void SLTest02()
{ 
	SL sl;
	SLInit(&sl);
	SLPushBack(&sl, 1);
	SLPushBack(&sl, 2);
	SLPushBack(&sl, 3);
	SLPushBack(&sl, 4);
	SLPrint(sl);//尾插1234
	//测试指定位置之前插入数据
	//SLInsert(&sl, 0, 99);
	//SLInsert(&sl, sl.size, 88);
	/*SLPrint(sl);*///99 1 2 3 4 88
	//测试删除指定位置的数据
	//SLErase(&sl, 3);
	//SLPrint(sl);//1 2 3
	//测试顺序表的查找
	int find = SLFind(&sl,4);
	if (find < 0)
	{
        printf("没有找到\n");
	}
    else
    {
        printf("找到了，下标为%d\n", find);
    }
	SLDestroy(&sl);
}
int main()
{
	//SLTest01();
    SLTest02();
	return 0;
 }