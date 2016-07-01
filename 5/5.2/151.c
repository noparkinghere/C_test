/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ���ķ˹������
 *		Ҫ�㣺����ѧӦ�ã�����Ȥ��
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


bool IsAms(int num);
int Cube(int num);
int GetBit(int num, int bit);




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
	printf("the result is:\n");
	for (i = 100; i < 1000; i++)
	{
		if (IsAms(i))
		{
			printf("%d\t", i);
		}
	}
	printf("\n");
}


/*************************************************
	Function: 		IsAms
	Description: 	�ж��Ƿ��ǰ�ķ˹������
	Calls: 			scanf	printf
	Called By:		
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
bool IsAms(int num)
{
	if (num == Cube(GetBit(num, 1)) + Cube(GetBit(num, 2)) \
		+ Cube(GetBit(num, 3)))
	{
		return true;
	}
	else 
	{
		return false;
	}
}


/*************************************************
	Function: 		Cube
	Description: 	����ֵ
	Calls: 			
	Called By:		
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
int Cube(int num)
{
	return (num * num * num);
}

/*************************************************
	Function: 		GetBit
	Description: 	��ȡ���ݵ�ĳλ��ֵ
	Calls: 			
	Called By:		
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
int GetBit(int num, int bit)
{
	int i;
	int res;
	for (i = 0; i < bit; i++)
	{
		res = num % 10;
		num /= 10;
	}
	return res;
}
