/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：求自然对数的底e的计算
 *		要点：数学问题求解
 *		
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


#define PI 3.14159265


double fun(void);
double mul(double val, int num);
int fac(int num);



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
	double e;
	e = fun();
	printf("%lf", e);
}

/************************************************
	Function: 		fun
	Description: 	求e
	Calls: 			
	Called By:		
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
double fun(void)
{
	double res = 1.0;
	int i;
	for (i = 1; ; i++)
	{
		res += 1.0/fac(i);
		if (1.0/fac(i) < mul(0.1, 10))
		{
			break;
		}
		// printf("%lf\n", res);
	}
	return res;
}


/************************************************
	Function: 		fac
	Description: 	求阶乘,递归算法
	Calls: 			
	Called By:		
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
int fac(int num)
{
	return (num==0 ? 1 : num*fac(num-1));
}



/************************************************
	Function: 		mul
	Description: 	
	Calls: 			
	Called By:		
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
double mul(double val, int num)
{
	for (; num > 1; num--)
	{
		val *= val;
	}
	return val;
}
