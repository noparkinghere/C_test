/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：二维数组行列互换
 *		要点：函数，流程控制
 * 		重点：数组的定义，输入输出
 *
 ********************************************************************************/

 
#include <stdio.h>

#define N 4


void OutputDyadicArr(int f_row, int f_column, int f_value[][N]);
void InputDyadicArr(int f_row, int f_column, int f_value[][N]);


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
	int num;
	int a[100][N];
	double res;
	printf("input the number of students:\n");
	scanf("%d", &num);
	printf("input the student ID and the three scores:\n");
	
	InputDyadicArr(num, N, a);
	OutputDyadicArr(num, N, a);
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
void InputDyadicArr(int f_row, int f_column, int f_value[][N])
{
	int i, j;

	for (i = 0; i < f_row; i++)
	{
		printf("next student:\n");
		for (j = 0; j < f_column; j++)
			scanf("%d", &f_value[i][j]);
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
void OutputDyadicArr(int f_row, int f_column, int f_value[][N])
{
	int i, j;
	int sum = 0;
	printf("ID\tChinese\tMath\tEnglish\tAverage\n");
	for (i = 0; i < f_row; i++)
	{
		printf("\n");
		sum = 0;
		printf("%d\t", f_value[i][0]);
		for (j = 1; j < f_column; j++)
		{
			printf("%d\t", f_value[i][j]);
			sum +=f_value[i][j];
		}
		printf("%lf", sum / 3.0);
	}
}

