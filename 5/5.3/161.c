/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：求整数的绝对值
 *		要点：数学问题求解
 *		
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>





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
	int num;
	scanf("%d", &num);
	printf("%d", abs(num));
}

/*************************************************
	Function: 		abs
	Description: 	返回绝对值
	Calls: 			
	Called By:		
	Input: 			无
	Output: 		无
	Return: 		0
	underline:		在做只有返回值得时候使用
					？： 这种形式比if更为简练。
*************************************************/
int abs(int num)
{
	return (num>0 ? num : -num);
}


