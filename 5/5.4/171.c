/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ�����ĳ˷�
 *		Ҫ�㣺����
 *		ע�⣺��ά�������ʹ�ú���������ͬһά���飬����ָ�룬ָ�����飬����ָ�������	
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>




void Init2(int arr[][2]);
void Init1(int arr[][3]);
void Mul(int a[][3], int b[][2], int res[][2]);
void Output(int res[][2]);

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
	int a[2][3];
	int b[3][2];
	int res[2][2] = {0};
	Init1(a);
	Init2(b);
	//Output(res);
	Mul(a, b, res);
	Output(res);
}

/*************************************************
	Function:		Init	
	Description:	��ʼ������	
	Calls: 			scanf	printf
	Called By:		������
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
void Init1(int arr[][3])
{
	int i, j;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)	
		{
			scanf("%d", &arr[i][j]);
		}
	}
}
/*************************************************
	Function:		Init	
	Description:	��ʼ������	
	Calls: 			scanf	printf
	Called By:		������
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
void Init2(int arr[][2])
{
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)	
		{
			scanf("%d", &arr[i][j]);
		}
	}
}

/*************************************************
	Function:		Plus	
	Description:	�������	
	Calls: 			scanf	printf
	Called By:		������
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
void Mul(int a[][3], int b[][2], int res[][2]) 
{
	int i, j, k;
	for (i = 0; i < 2; i++)
	{
		for (k = 0; k < 2; k++)	
		{
			for (j = 0; j < 3; j++)	
			{
				res[i][k] += a[i][j] * b[j][k];
				//printf("%d\n", res[i][k]);
			}
		}
	}
}

/*************************************************
	Function:		Output	
	Description:	�������	
	Calls: 			scanf	printf
	Called By:		������
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
void Output(int res[][2])
{
	int i, j;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)	
		{
			printf("%d\t", res[i][j]);
		}
		printf("\n");
	}
}



