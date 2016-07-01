/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：3*3矩阵对角线之和
 *		要点：矩阵
 *		
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>






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
	int i, j;
	int res = 0;
	printf("input the numbers\n");

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("the result is :\n");

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i < 3; i++)
	{
		res += a[i][i];
	}
	printf("%d\n", res);

}
