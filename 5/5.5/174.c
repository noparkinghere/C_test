/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：卖西瓜
 *		要点：生活中的数学问题
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>




#define SUM		1020



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
	int sum = SUM;
	for(i = 1; (sum=sum/2-2) != 0; i++)
	;
	printf("the day is :%d", i);
}



