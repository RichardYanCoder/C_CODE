#pragma once
#include <stdio.h>
#include <stdlib.h>

//定义符号
#define ROW 9//表示9行
#define COL 9//表示9列

#define ROWS ROW+2
#define COLS COL+2
//使用9行9列，但创建11行11列
//声明函数
//棋盘初始化函数
void InitBoard(char arr[ROWS][COLS], int rows, int cols ,char set);//声明
//打印棋盘
void DisplayBoard(char arr[ROWS][COLS], int row, int col);
