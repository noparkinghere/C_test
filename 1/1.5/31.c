/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：二维数组行列互换
 *		要点：函数，流程控制
 * 		重点：数组的定义，输入输出
 *
 ********************************************************************************/

 
#include <stdio.h>


void OutputDyadicArr(int f_row, int f_column, int f_value[][100]);
void InputDyadicArr(int f_row, int f_column, int f_value[][100]);
void ReverseArray(int row, int column, int a[][100], int b[][100]);


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
	int row, column;
	int a[100][100], b[100][100];
	double res;
	printf("input the row:\n");
	scanf("%d", &row);
	printf("input the column:\n");
	scanf("%d", &column);
	
	InputDyadicArr(row, column, a);
	ReverseArray(row, column, a, b);
	OutputDyadicArr(row, column, a);
	OutputDyadicArr(column, row, b);
}


/*************************************************
	Function: 		InputDyadicArr
	Description: 	键盘输入数据，注意数组作为形参
					不得缺省二阶的长度
	Calls: 			
	Called By:		mian
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
void InputDyadicArr(int f_row, int f_column, int f_value[][100])
{
	int i, j;
	printf("input the value:\n");

	for (i = 0; i < f_row; i++)
	{
		printf("\n");
		for (j = 0; j < f_column; j++)
			scanf("%d", &f_value[i][j]);
	}
}


/*************************************************
	Function: 		ReverseArray
	Description: 	翻转矩阵 行列互换
					不得缺省二阶的长度
	Calls: 			
	Called By:		mian
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
void ReverseArray(int row, int column, int a[][100], int b[][100])
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < column; j++)
		{
			b[j][i] = a[i][j];
		}
	}
}

/*************************************************
	Function: 		OutputDyadicArr
	Description: 	输出数组数据，注意数组作为形参
					不得缺省二阶的长度
	Calls: 			
	Called By:		mian
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
void OutputDyadicArr(int f_row, int f_column, int f_value[][100])
{
	int i, j;
	for (i = 0; i < f_row; i++)
	{
		printf("\n");
		for (j = 0; j < f_column; j++)
			printf("%d\t", f_value[i][j]);
	}
}



