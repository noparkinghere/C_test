/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ�����abcd = (ab + cd)2
 *		Ҫ�㣺����ѧӦ�ã�����Ȥ��
 *		
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


// typedef unsigned long int u32

int Square(int num);
int GetBit(int num, int i);
bool IsMatch(int num);


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
	for (i = 1000; i <= 9999; i++)
	{
		if (IsMatch(i))
		{
			printf("%d\t", i);
		}
	}	//end of for
}


/*************************************************
	Function: 		Square
	Description: 	����ƽ����
	Calls: 			
	Called By:		
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
int Square(int num)
{
	return (num*num);
}


/*************************************************
	Function: 		GetBit
	Description: 	���ĳһλ����
	Calls: 			
	Called By:		
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
int GetBit(int num, int i)
{
	while (--i)
	{
		num /= 10;
	}
	return (num % 10);
}


bool IsMatch(int num)
{
	if (Square(GetBit(num, 1) + 10*GetBit(num, 2) + GetBit(num, 3) \
		+ 10*GetBit(num, 4))  == num)
	{
		return true;
	}
	else
	{
		return false;
	}
}

