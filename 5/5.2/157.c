/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：满足abcd = (ab + cd)2
 *		要点：简单数学应用，整数趣题
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
	Description: 	主函数
	Calls: 			scanf	printf
	Called By:		编译器
	Input: 			无
	Output: 		无
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
	Description: 	返回平方数
	Calls: 			
	Called By:		
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
int Square(int num)
{
	return (num*num);
}


/*************************************************
	Function: 		GetBit
	Description: 	获得某一位的数
	Calls: 			
	Called By:		
	Input: 			无
	Output: 		无
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

