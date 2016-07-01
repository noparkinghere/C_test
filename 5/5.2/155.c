/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：亲密数
 *		要点：简单数学应用，整数趣题
 *		注意：通用方法无法解决这个问题，算法时间复杂度过高，且用时太长。
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>



bool IsClose(int num1, int num2);
bool IsFac(int num, int i);






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
	int j;
	//1-10000的所有数
	for (i = 1; i <= 10000; i++)
	{
		//往后寻找亲密数
		for (j = i + 1; j <= 10000; j++)
		{
			if (IsClose(i, j))
			{
				printf("%d<->%d\n", i, j);
			}
		}
	}	//end of for
}


/*************************************************
	Function: 		IsClose
	Description: 	判断是否是亲密数
	Calls: 			
	Called By:		
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
bool IsClose(int num1, int num2)
{
	int i;
	int res1 = 0;
	int res2 = 0;
	for (i = 2; i < num1; i++)
	{
		if (IsFac(num1, i))
		{
			res1 += i;
		}
	}
	
	for (i = 2; i < num2; i++)
	{
		if (IsFac(num2, i))
		{
			res2 += i;
		}
	}
	
	//精简表达方式
	return (res1==num2 && res2==num1) ? true : false;
}

/*************************************************
	Function: 		IsFac
	Description: 	判断是否为因子
	Calls: 			
	Called By:		
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
bool IsFac(int num, int i)
{
	return (num%i==0 ? true : false);
}


