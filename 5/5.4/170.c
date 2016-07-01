/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ�����ļӷ�
 *		Ҫ�㣺����
 *		ע�⣺��ά�������ʹ�ú���������ͬһά���飬����ָ�룬ָ�����飬����ָ�������	
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
	Description: 	������
	Calls: 			scanf	printf
	Called By:		������
	Input: 			��
	Output: 		��
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
	Description:	��ʼ������	
	Calls: 			scanf	printf
	Called By:		������
	Input: 			��
	Output: 		��
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
	Description:	�������	
	Calls: 			scanf	printf
	Called By:		������
	Input: 			��
	Output: 		��
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
	Description:	�������	
	Calls: 			scanf	printf
	Called By:		������
	Input: 			��
	Output: 		��
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

