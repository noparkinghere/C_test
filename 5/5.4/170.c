/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：矩阵的加法
 *		要点：矩阵
 *		注意：二维数组如何使用函数操作，同一维数组，二级指针，指针数组，数组指针的区别	
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>




void Init(int arr[3][3]);
void Output(int res[][3]);
void Plus(int a[][3], int b[][3], int res[][3]);

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
	int a[3][3];
	int b[3][3];
	int res[3][3];
	Init(a);
	Init(b);
	Plus(a, b, res);
	Output(res);
}

/*************************************************
	Function:		Init	
	Description:	初始化数组	
	Calls: 			scanf	printf
	Called By:		编译器
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
void Init(int arr[][3])
{
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)	
		{
			scanf("%d", &arr[i][j]);
		}
	}
}

/*************************************************
	Function:		Plus	
	Description:	矩阵求和	
	Calls: 			scanf	printf
	Called By:		编译器
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
void Plus(int a[][3], int b[][3], int res[][3]) 
{
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)	
		{
			res[i][j] = a[i][j] + b[i][j];
		}
	}
}

/*************************************************
	Function:		Output	
	Description:	矩阵输出	
	Calls: 			scanf	printf
	Called By:		编译器
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
void Output(int res[][3])
{
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)	
		{
			printf("%d\t", res[i][j]);
		}
		printf("\n");
	}
}

