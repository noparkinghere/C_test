/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ�3*3����Խ���֮��
 *		Ҫ�㣺����
 *		
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>






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
