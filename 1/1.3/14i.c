/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：用符号打印图形
 *		要点：函数，流程控制
 * 		重点：掌握for的灵活运用，程序思路和算法
 *
 ********************************************************************************/

 
#include <stdio.h>


void PrintChart1(int f_row, char f_sym);
void PrintChart2(int f_row, char f_sym);
void PrintChart3(int f_row, char f_sym);


/*************************************************
	Function: 		main
	Description: 	主函数
	Calls: 			scanf	printf
	Called By:		编译器
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
int main(void)
{
	int i;
	int row;
	char sym;
	printf("input the row and the symbol, seperating them with blankspace:\n");
	scanf("%d %c", &row, &sym);
	PrintChart1(row, sym);
	//下面为举一反三中的图案
	PrintChart2(row, sym);
	PrintChart3(row, sym);
}

/*************************************************
	Function: 		PrintChart1
	Description: 	图案1
	Calls: 			printf
	Called By:		main
	Input: 			int f_row, char f_sym
	Output: 		无
	Return: 		0
*************************************************/
void PrintChart1(int f_row, char f_sym)
{
	int i, j;
	for (i = 0; i < f_row; i++)
	{
		for (j = 0; j < i; j++)
			printf(" ");
		for (j = 0; j < f_row; j++)
			printf("%c", f_sym);
		printf("\n");
	}
}

/*************************************************
	Function: 		PrintChart2
	Description: 	图案2
	Calls: 			printf
	Called By:		main
	Input: 			int f_row, char f_sym
	Output: 		无
	Return: 		0
*************************************************/
void PrintChart2(int f_row, char f_sym)
{
	int i, j;
	for (i = 0; i < f_row / 2; i++)
	{
		for (j = 0; j < f_row; j++)
			printf("%c", f_sym);
		printf("\n");
		for (j = 0; j <= i; j++)
			printf(" ");
		for (j = 0; j < f_row; j++)
			printf("%c", f_sym);
		printf("\n");
	}
}

/*************************************************
	Function: 		PrintChart3
	Description: 	图案3
	Calls: 			printf
	Called By:		main
	Input: 			int f_row, char f_sym
	Output: 		无
	Return: 		0
*************************************************/
void PrintChart3(int f_row, char f_sym)
{
	int i, j;
	for (i = 0; i < f_row; i++)
	{
		for (j = 0; j < i; j++)
			printf(" ");
		if (i < f_row - 1)
			printf("#");
		for (j = 0; j < (f_row - i) * 2 - 3; j++)
			printf("%c", f_sym);
		printf("#");
		printf("\n");
	}
}


