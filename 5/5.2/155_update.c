/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：亲密数
 *		要点：简单数学应用，整数趣题
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int GetClose(int num);
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
	int res;
	//1-10000的所有数的亲密数
	for (i = 1; i <= 10000; i++)
	{
		if (res = GetClose(i))
		{
			printf("%d<->%d\n", i, res);
		}

	}	//end of for
}


/*************************************************
	Function: 		GetClose
	Description: 	得到亲密数
	Calls: 			
	Called By:		
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
int GetClose(int num)
{
	int i;
	int res1 = 0;
	int res2 = 0;
	for (i = 2; i <= num/2; i++)
	{
		if (IsFac(num, i))
		{
			res1 += i;
		}
	}
	
	for (i = 2; i <= res1/2; i++)
	{
		if (IsFac(res1, i))
		{
			res2 += i;
		}
	}
	
	//精简表达方式
	return ((res2==num && num<res1) ? res1 : 0);
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


