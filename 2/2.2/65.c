/****************************** (C) COPYRIGHT 2016 *******************************
 
 *  	功能：输出二维数组，任一行任一列
 *		要点：简单的排序,如果只需要输出，未必需要中间量
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
	Description: 	主函数
	Calls: 			scanf	printf
	Called By:		编译器
	Input: 			无
	Output: 		无
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
	Description: 	输出二维数组
	Calls: 			scanf	printf
	Called By:		main
	Input: 			无
	Output: 		无
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
	Description: 	改变任意数组中的值
	Calls: 			
	Called By:		main
	Input: 			无
	Output: 		无
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

