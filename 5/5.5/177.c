/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：捕鱼分鱼问题
 *		要点：生活中的数学问题
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
	Description: 	实现分鱼算法判断
	Calls: 			
	Called By:		
	Input: 			无
	Output: 		无
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

