/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ���1000���ڵ���ȫ��
 *		Ҫ�㣺����ѧӦ�ã�����Ȥ��
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>



bool IsFac(int num, int i);
bool IsCom(int num);




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
	for (i = 1; i <= 1000; i++)
	{
		if (IsCom(i))
		{
			printf("%d\t", i);
		}
	}
	printf("\n");
}


/*************************************************
	Function: 		IsCom
	Description: 	�ж��Ƿ�����ȫ��
	Calls: 			scanf	printf
	Called By:		
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
bool IsCom(int num)
{
	int i;
	int res = 0;
	for (i = 1; i < num; i++)
	{
		if (IsFac(num, i))
		{
			res += i;		
		}
	}
	
	if (num == res)
	{
		return true;
	}
	return false;
}

/*************************************************
	Function: 		IsFun
	Description: 	�ж��Ƿ�������
	Calls: 			scanf	printf
	Called By:		
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
bool IsFac(int num, int i)
{
	if (num % i == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}


