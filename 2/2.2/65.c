/****************************** (C) COPYRIGHT 2016 *******************************
 
 *  	���ܣ������ά���飬��һ����һ��
 *		Ҫ�㣺�򵥵�����,���ֻ��Ҫ�����δ����Ҫ�м���
 * 
 ********************************************************************************/

 
#include <stdio.h>
#include <stdlib.h>


#define ROWS	3
#define COLS	4


void OutArr(int rows, int clos, int arr[][COLS]);
void ChgArr(int rows, int clos, int arr[][COLS]);


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
	int arr[ROWS][COLS] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
	OutArr(ROWS, COLS, arr);
	ChgArr(ROWS, COLS, arr);
	OutArr(ROWS, COLS, arr);
}

/*************************************************
	Function: 		OutArr
	Description: 	�����ά����
	Calls: 			scanf	printf
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
void OutArr(int rows, int clos, int arr[][COLS])
{
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < clos; j++)
		{
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
}

/*************************************************
	Function: 		ChgArr
	Description: 	�ı����������е�ֵ
	Calls: 			
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
void ChgArr(int rows, int clos, int arr[][COLS])
{
	int i, j;
	printf("i=");
	scanf("%d", &i);
	printf("j=");
	scanf("%d", &j);
	if (i > rows || j > clos)
	{
		printf("error array");
		exit(-1);
	}
	printf("input the number:");
	scanf("%d", &arr[i - 1][j - 1]);
}

