/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：求解二元一次不定方程
 *		要点：数学问题求解
 *		
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int Res(int a, int b, int c);
int fun1(int num1, int num2);



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
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	Res(a, b, c);
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
	Function: 		Res
	Description: 	输出满足的条件计算结果
	Calls: 			
	Called By:		
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
int Res(int a, int b, int c)
{
	int x, y;
	if (fun1(a, b) % c != 0)
	{
		printf("no value!\n");
		return 0;
	}
	else
	{
		for (x = 1; ; x++)
		{
			if ((c-a*x) % b == 0)
			{
				// printf("%d\t", x);
				break;
			}
			else if ((c+a*x) % b == 0)
			{
				x = -x;
				break;
			}
		}
		y = (c-a*x) / b;
	}
	printf("x = %d, y = %d\n", x, y);

}


