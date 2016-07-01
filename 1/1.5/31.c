/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ���ά�������л���
 *		Ҫ�㣺���������̿���
 * 		�ص㣺����Ķ��壬�������
 *
 ********************************************************************************/

 
#include <stdio.h>


void OutputDyadicArr(int f_row, int f_column, int f_value[][100]);
void InputDyadicArr(int f_row, int f_column, int f_value[][100]);
void ReverseArray(int row, int column, int a[][100], int b[][100]);


/*************************************************
	Function: 		main
	Description: 	������
	Calls: 			scanf	printf
	Called By:		������
	Input: 			��
	Output: 		��
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
	Description: 	�����������ݣ�ע��������Ϊ�β�
					����ȱʡ���׵ĳ���
	Calls: 			
	Called By:		mian
	Input: 			��
	Output: 		��
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
	Description: 	��ת���� ���л���
					����ȱʡ���׵ĳ���
	Calls: 			
	Called By:		mian
	Input: 			��
	Output: 		��
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
	Description: 	����������ݣ�ע��������Ϊ�β�
					����ȱʡ���׵ĳ���
	Calls: 			
	Called By:		mian
	Input: 			��
	Output: 		��
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



