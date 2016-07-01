/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：求1 + 1/2 + 1/3 + ... + 1/n
 *		要点：函数，流程控制
 * 		重点：掌握for的灵活运用，程序思路和算法
 *
 ********************************************************************************/

 
#include <stdio.h>


int GetNum(int num);
int SwapNum(int num);


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
	printf("the four figures:\n");

	GetNum(num);
}


/*************************************************
	Function: 		GetNum
	Description: 	按要求输出结果
	Calls: 			
	Called By:		main
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
int GetNum(int num)
{
	int i;
	for (i = 1000; i < 10000; i++)
	{
		if (i * 9 == SwapNum(i))
			printf("%d\t%d\n", i, SwapNum(i));
	}
}

/*************************************************
	Function: 		SwapNum
	Description: 	交换数值
	Calls: 			
	Called By:		JudgeSwap
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
int SwapNum(int num)
{
	int res = 0;
	if (num <= 0)
		return 0;
	
	do
	{
		res = res * 10 + num % 10;
		num /= 10;
	} while (num > 0);
	
	return res;
}

