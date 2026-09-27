#define  _CRT_SECURE_NO_WARNINGS
#include"SeqList.h"
#include<assert.h>
void SLInit(SL* ps)
{
	ps->arr = NULL;
	ps->size = ps->capacity = 0;
}
void SLDestroy(SL* ps)
{
	if (ps->arr)
	{
		free(ps->arr);
	}
	ps->arr = NULL;
	ps->size = ps->capacity = 0;
}
void SLCheckCapacity(SL* ps)
{ 
	if (ps->capacity == ps->size)
	{
		int newCapacity = ps->capacity == 0 ? 4 : 2 * ps->capacity;
		SLDataType* tmp = (SLDataType*)realloc(ps->arr, newCapacity * sizeof(SLDataType));
		if (tmp == NULL)
		{
			perror("realloc fail!");
			exit(1);
		}
		ps->arr = tmp;
		ps->capacity = newCapacity;
	}
}
//顺序表的尾插
void SLPushBack(SL* ps, SLDataType x)
{
	//ps->arr[ps->size] = x;
	//++ps->size;
	//插入数据之前先看空间够不够
	assert(ps);//断言
	//if (ps->capacity == ps->size)
	//{
	//	//申请空间
	//	//malloc calloc realloc
	//	//三目表达式
	//	int newCapacity = ps->capacity == 0 ? 4 : 2 * ps->capacity;
	//	要申请多大的空间，增容以倍数增加
	//	SLDataType* tmp = (SLDataType*)realloc(ps->arr, ps->capacity * 2 * sizeof(SLDataType));
	//	if (tmp == NULL)
	//	{
	//		perror("realloc fail!");
	//		exit(1);
	//	}
	//	空间申请成功
	//	ps->arr = tmp;
	//	ps->capacity = newCapacity;
	//}
	SLCheckCapacity(ps);
	ps->arr[ps->size++] = x;
}
//头插
void SLPushFront(SL* ps, SLDataType x)
{ 
	assert(ps);
	SLCheckCapacity(ps);
	//让数据表中已有的数据整体往后挪动一位
	for (int i = ps->size; i>0 ; i--)
	{
		ps->arr[i] = ps->arr[i - 1];//arr[1] = arr[0]
	}
	ps->arr[0] = x;
	ps->size++;
}
void SLPrint(SL s)
{
	for (int i = 0; i < s.size; i++)
    {
        printf("%d ", s.arr[i]);
    }
    printf("\n");
}
void SLPopBack(SL* ps)
{
	assert(ps);
	assert(ps->size);
	//顺序表不为空
	//ps->arr[ps->size-1] = -1;
	--ps->size;
}
void SLPopFront(SL* ps)
{
	assert(ps);
	assert(ps->size);
	//数据整体往前挪一位
	for (int i = 0; i < ps->size - 1; i++)
    {
        ps->arr[i] = ps->arr[i + 1];
    }
	ps->size--;
}
//在指定位置之前插入数据
//pos不能是任意的一个整数
void SLInsert(SL* ps, int pos, SLDataType x)
{
	assert(ps);
	assert(pos >= 0 && pos <= ps->size);
	//插入数据之前先看空间够不够
    SLCheckCapacity(ps);
	//让pos及之后的数据整体往后挪一位
	for (int i = ps->size; i>pos ;i--)
	{
		ps->arr[i] = ps->arr[i - 1];//arr[pos+1]=arr[pos]
	}
	ps->arr[pos] = x;
	ps->size++;
}
void SLErase(SL* ps, int pos)
{
	assert(ps);
	assert(pos>=0 && pos<ps->size);
	for (int i = pos;i<ps->size-1;i++)
	{
		ps->arr[i] = ps->arr[i + 1];//arr[size-2]=arr[size-1]
	}
	ps->size--;
}
//顺序表的查找
int SLFind(SL* ps, SLDataType x)
{
	assert(ps);
	for (int i = 0;i < ps->size;i++)
	{
		if (ps->arr[i] == x)
		{
			//找到了
			return i;
		}
	}
	//没有找到
	return -1;
}
