/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ������������
 *		Ҫ�㣺����ѧӦ�ã�����Ȥ��
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


bool GetFac(int num);



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
	int num;
	while (1)
	{
		scanf("%d", &num);
		GetFac(num);
	}
}


/*************************************************
	Function: 		GetFac
	Description: 	�ó����еķ�1�����������
	Calls: 			
	Called By:		
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
bool GetFac(int num)
{
	int i;
	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			printf("%d\t", i);
		}
	}
	printf("\n");
}



