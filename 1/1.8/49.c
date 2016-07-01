/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：买苹果问题
 *		要点：函数，流程控制
 * 		重点：这系列过于简单的问题，不宜使用多个函数程序思路和算法
 *
 ********************************************************************************/

 
#include <stdio.h>




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
	float vla = 0.8;
	int num = 2;
	int sum = 0;
	int i;
	float res;
	for (i = 0; sum < 100; i++)
	{
		sum = sum + num;
		num *= 2;
	}
	res = sum / i * 0.8;
	printf("%d\t%f\n", i, res);
}


