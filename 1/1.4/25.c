/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：计算任意自然数的各位数字的平方和,得出的结果再计算直到为1或者145
 *		要点：函数，流程控制
 * 		重点：熟练取出各位数字，掌握for的灵活运用，程序思路和算法
 *
 ********************************************************************************/

 
#include <stdio.h>


void PrintRes(int num);
int GetSum(int res);



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
	double res;
	printf("input the number:\n");
	scanf("%d", &num);
	
	PrintRes(num);
}


/*************************************************
	Function: 		PrintRes
	Description: 	打印满足结果的值
	Calls: 			scanf	printf
	Called By:		main
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
void PrintRes(int num)
{
	int res = num;
	do
	{
		printf("%d->", res);
		res = GetSum(res);
		printf("\b=");			//后退删除将+变成=
		printf("%d\n", res);
	} while (1 != res && 145 != res);
}


/*************************************************
	Function: 		GetSum
	Description: 	得到每次的结果
	Calls: 			
	Called By:		PrintRes
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
int GetSum(int res)
{
	int result = 0;
	while (res > 0)
	{
		printf("%d*%d+", res % 10, res % 10);
		result += (res % 10) * (res % 10);
		res /= 10;
	}
	return result;
}


