/****************************** (C) COPYRIGHT 2016 *******************************
 
 *  	功能：打印杨辉三角
 *		要点：简单的排序,如果只需要输出，未必需要中间量
 * 
 ********************************************************************************/

 
#include <stdio.h>
#include <stdlib.h>

void PrintYHTriAg(int row, int **ppArray);
int **CreatArrMemory(int row);
int **FreeArrMemory(int f_row, int **ppArray);


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
	Description: 	分配动态内存
	Calls: 			malloc
	Called By:		main
	Input: 			无
	Output: 		无
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
	Description: 	释放分配的内存空间
	Calls: 			free
	Called By:		main
	Input: 			无
	Output: 		无
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
	Description: 	打印杨辉三角
	Calls: 			printf
	Called By:		main
	Input: 			无
	Output: 		无
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
		for (j = 1; j < i; j++)		//从第三行开始计算
		{
			ppArray[i][j] = ppArray[i - 1][j] + ppArray[i - 1][j - 1];
			printf("%d\t", ppArray[i][j]);
		}	
		ppArray[i][i] = 1;
		printf("%d\n", ppArray[i][i]);
	}
}

