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



int fun1(int num1, int num2);
int fun2(int num1, int num2);


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
	int a, b;
	int res1, res2;
	scanf("%d%d", &a, &b);
	res1 = fun1(a, b);
	res2 = fun2(a, b);
	printf("res1 = %d, res2 = %d\n", res1, res2);
}

/************************************************
	Function: 		fun1
	Description: 	求最大公约数
	Calls: 			
	Called By:		
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
int fun1(int num1, int num2)
{
	int tmp;
	int i;
	int res;
	tmp = (num1>num2 ? num2 : num1);
	for (i = 1; i <= tmp; i++)
	{
		if (num1%i == 0 && num2%i == 0)	
		{
			res	= i;
		}
	}
	return res;
}


/************************************************
	Function: 		fun2
	Description: 	求小公倍数
	Calls: 			
	Called By:		
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
int fun2(int num1, int num2)
{
	int tmp;
	int i;
	int res;
	tmp = (num1>num2 ? num1 : num2);
	for (i = tmp; ; i++)
	{
		if (i%num1 == 0 && i%num2 == 0)	
		{
			res	= i;
			break;
		}
	}
	return res;
}


