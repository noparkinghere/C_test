/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ���ӡ���ⷽ��
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
	int i, j;
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 5; j++)	
		{
			if (j >= i)	
			{
				printf("%d\t", i);
			}
			else
			{
				printf("%d\t", j);
			}
		}
		for (j = 6; j <= 9; j++)	
		{
			if (10-j >= i)	
			{
				printf("%d\t", i);
			}
			else
			{
				printf("%d\t", 10-j);
			}
		}
		printf("\n");
	}

	for (i = 6; i <= 9; i++)
	{
		for (j = 1; j <= 5; j++)	
		{
			if (j >= 10-i)	
			{
				printf("%d\t", 10-i);
			}
			else
			{
				printf("%d\t", j);
			}
		}
		for (j = 6; j <= 9; j++)	
		{
			if (10-j >= 10-i)	
			{
				printf("%d\t", 10-i);
			}
			else
			{
				printf("%d\t", 10-j);
			}
		}
		printf("\n");
	}

}


