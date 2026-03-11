#define  _CRT_SECURE_NO_WARNINGS
#include"game.h"
void menu()
{
	printf("*********************\n");
	printf("*****   1.play  *****\n");
	printf("*****   0.exit  *****\n");
	printf("*********************\n");
}
void game()
{
	//完成扫雷游戏
	char mine[ROWS][COLS] = { 0 };//把数组全部初始化为字符0
	char show[ROWS][COLS] = { 0 };//把数组全部初始化为字符*
	//初始化棋盘
	//个数固定了，拓展不方便，新建头文件定义符号
	InitBoard(mine, ROWS, COLS,'0');//二维数组传参
	InitBoard(mine, ROWS, COLS,'*');
	//打印棋盘
	DisplayBoard(mine,ROW,COL);
	//DisplayBoard(show,ROW,COL);
}
void test()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d",&input);//1 or 0 or x
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏结束，退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}