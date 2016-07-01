/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：二分法求解方程
 *		要点：数学问题求解
 *		
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>



double GetRes(double a, double b);


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
	double a, b;
	printf("enter the a,b:\n");
	scanf("%lf%lf", &a, &b);
	printf("the result is : %lf", GetRes(a, b));
}

/************************************************
	Function: 		GetRes
	Description: 	获得根结果
	Calls: 			
	Called By:		
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
double GetRes(double a, double b)
{
	double res = (a+b) / 2;
	while ((b-res) > 0.00000001)
	{
		sin(res)>0 ? a=res : b=res;	
		res = (a+b) / 2;
	}
	return res;
}

