/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：递归分鱼问题
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
	for (i = 1; ; i++)	//从1依次往后寻找满足值
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
	Description: 	递归算法判定分鱼
	Calls: 			
	Called By:		
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
bool fun(int num, int mem)
{
	if (mem != 1)		//递归处理一般情况
	{
		if (fun((num-1)/5*4, mem-1) && num%5==1)//特别注意递归的算法需对每次进行判定，判定本次是否满足，以及子函数是否满足
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else		//注意递归需要处理返回问题
	{
		return (num%5 == 1) ? true : false;	//递归最后一次的判定
	}
}



