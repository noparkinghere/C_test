/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ������������
 *		Ҫ�㣺�����е���ѧ����
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define NUM 5



// double tmp1;

bool fun(int num, int mem);

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
	int i;
	for (i = 6; ; i++)
	{
		if (fun(i, NUM))
		{
			break;	
		}
	}
	printf("%d\n", i);
}


/*************************************************
	Function: 		fun
	Description: 	ʵ�ַ����㷨�ж�
	Calls: 			
	Called By:		
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
bool fun(int num, int mem)
{
	int i;
	for (i = 0; i < mem; i++)
	{
		if (num%5 != 1)
		{
			return false;
		}
		num = (num-1) / 5 * 4;
	}
	return true;
}

