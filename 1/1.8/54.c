/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ���������
 *		Ҫ�㣺���̿���
 *
 ********************************************************************************/

 
#include <stdio.h>


#define SUM 8


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
	int i, j, k;
	int num = 1;
	for (i = 0; i <= 3; i++)
	{
		for (j = 0; j <= 3; j++)
		{
			for (k =0; k <= 6; k++)
			{
				if (i + j + k == SUM)
				{
					printf("time%d\tred:%d\twhite:%d\tblack:%d\n", num, i, j, k);
					num++;
				}
			}
		}
	}
}




