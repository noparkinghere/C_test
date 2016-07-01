/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：三角函数计算
 *		要点：数学问题求解
 *		
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


#define PI 3.14159265


int fun(double num);



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
	int num;	//输入值为度数整数值
	scanf("%d", &num);
	fun(num/360.0*2*PI);
}

/************************************************
	Function: 		fun
	Description: 	三角函数的计算
	Calls: 			
	Called By:		
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
int fun(double num)
{
	printf("%lf\n", sin(num));
	printf("%lf\n", cos(num));
	printf("%lf\n", tan(num));
}



