/****************************** (C) COPYRIGHT 2016 *******************************
 
 *  	功能：用符号打印三角形
 *		要点：函数，流程控制
 * 
 ********************************************************************************/

 
#include <stdio.h>


void PrintTriag(int f_row, char f_sym);


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
	PrintTriag(row, sym);
}

/*************************************************
	Function: 		PrintTriag
	Description: 	打印三角形
	Calls: 			printf
	Called By:		main
	Input: 			int f_row, char f_sym
	Output: 		无
	Return: 		0
*************************************************/
void PrintTriag(int f_row, char f_sym)
{
	int i, j;
	for (i = 0; i < f_row; i++)
	{
		for (j = f_row - i; j > 0; j--)
			printf(" ");
		for (j = 0; j < i * 2 - 1; j++)
			printf("%c", f_sym);
		printf("\n");
	}
}

