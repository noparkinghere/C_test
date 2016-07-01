/****************************** (C) COPYRIGHT 2016 *******************************
 
 *  	���ܣ���ӡ�������
 *		Ҫ�㣺�򵥵�����,���ֻ��Ҫ�����δ����Ҫ�м���
 * 
 ********************************************************************************/

 
#include <stdio.h>
#include <stdlib.h>

void PrintYHTriAg(int row, int **ppArray);
int **CreatArrMemory(int row);
int **FreeArrMemory(int f_row, int **ppArray);


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
	int row;
	int **ppArray;
	scanf("%d", &row);
	ppArray = CreatArrMemory(row);
	PrintYHTriAg(row, ppArray);	
	ppArray = FreeArrMemory(row, ppArray);
	//FreeArrMemory(&ppArray);
}

/*************************************************
	Function: 		ArrMemory
	Description: 	���䶯̬�ڴ�
	Calls: 			malloc
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
int **CreatArrMemory(int row)
{
	int i;
	int **ppArray = NULL;
	ppArray = (int **)malloc(sizeof(int *) * row);
	if (NULL == ppArray)
	{
		printf("array malloc");
		exit(1);
	}
	for (i = 0; i < row; i++)
	{
		ppArray[i] = (int *)malloc(sizeof(int) * row);
		if (NULL == ppArray[i])
		{
			printf("array malloc");
			exit(1);
		}
	}
	return ppArray;

}

/*************************************************
	Function: 		FreeArrMemory
	Description: 	�ͷŷ�����ڴ�ռ�
	Calls: 			free
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
int **FreeArrMemory(int f_row, int **ppArray)
{
	int i;
	for (i = 0; i < f_row; i++)
	{
		free(ppArray[i]);
		ppArray[i] = NULL;
		if (NULL != ppArray[i])
		{
			printf("free error!");
		}
	}
	free(ppArray);
	ppArray = NULL;
	if (NULL != ppArray)
	{
		printf("free error!");
	}
	return NULL;
}

/*************************************************
	Function: 		PrintYHTriAg
	Description: 	��ӡ�������
	Calls: 			printf
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
void PrintYHTriAg(int row, int **ppArray)
{
	int i, j, tmp = 0;
	ppArray[0][0] = 1;
	printf("%d\n", ppArray[0][0]);
	
	for (i = 1; i < row; i++)
	{
		ppArray[i][0] = 1;
		printf("%d\t", ppArray[i][0]);
		for (j = 1; j < i; j++)		//�ӵ����п�ʼ����
		{
			ppArray[i][j] = ppArray[i - 1][j] + ppArray[i - 1][j - 1];
			printf("%d\t", ppArray[i][j]);
		}	
		ppArray[i][i] = 1;
		printf("%d\n", ppArray[i][i]);
	}
}

