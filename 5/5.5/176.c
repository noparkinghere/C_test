/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：水池注水问题
 *		要点：生活中的数学问题
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


#define START		2000
#define DAY			365
#define MAX			31
#define MIN			30
#define MIC			28





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
	double a = 1/3.0;
	double b = 1;
	double c = 1/4.0;
	double d = 1/5.0;
	printf("the day is %lf\n", 1/(a+b+c+d));
}



