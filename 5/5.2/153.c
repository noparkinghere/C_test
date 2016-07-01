/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：求1000以内的完全数
 *		要点：简单数学应用，整数趣题
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>



bool IsFac(int num, int i);
bool IsCom(int num);




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
	Description: 	判断是否是完全数
	Calls: 			scanf	printf
	Called By:		
	Input: 			无
	Output: 		无
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
	Description: 	判断是否是因子
	Calls: 			scanf	printf
	Called By:		
	Input: 			无
	Output: 		无
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


