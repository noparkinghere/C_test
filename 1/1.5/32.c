/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ���ά�������л���
 *		Ҫ�㣺���������̿���
 * 		�ص㣺����Ķ��壬�������
 *
 ********************************************************************************/

 
#include <stdio.h>

#define N 4


void OutputDyadicArr(int f_row, int f_column, int f_value[][N]);
void InputDyadicArr(int f_row, int f_column, int f_value[][N]);


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
	Description: 	�����������ݣ�ע��������Ϊ�β�
					����ȱʡ���׵ĳ���
	Calls: 			
	Called By:		mian
	Input: 			��
	Output: 		��
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
	Description: 	����������ݣ�ע��������Ϊ�β�
					����ȱʡ���׵ĳ���
	Calls: 			
	Called By:		mian
	Input: 			��
	Output: 		��
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

