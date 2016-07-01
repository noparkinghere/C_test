/****************************** (C) COPYRIGHT 2016 *******************************
 
 *  	功能：类似病毒，无限扩张堆空间
 *		要点：
 * 
 ********************************************************************************/

 
#include <stdio.h>
#include <stdlib.h>

#define MALLOC(type,n)	((type*)malloc(sizeof(type)*n))




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
	while(1)
	{
		MALLOC(int, 100);
	}
}