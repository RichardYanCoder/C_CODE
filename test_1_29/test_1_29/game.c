#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"game.h"
void InitBoard(char arr[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	for (i = 0;i < rows;i++)
	{
		int j = 0;
		for (j = 0;j < cols;j++)
		{
			arr[i][j] = set;
		}
	}
}
void DisplayBoard(char arr[ROWS][COLS], int row, int col)
{
	int i = 0;
	for (i = 1;i <= row;i++)
	{
		int j = 0;
		for (j = 1;j <= col;j++)
		{
			printf("%c",arr[i][j]);
		}
		printf("\n");
	}
}