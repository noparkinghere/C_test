/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：加油站加油
 *		要点：函数，流程控制
 * 		重点：掌握for的灵活运用，程序思路和算法
 *
 ********************************************************************************/

 
#include <stdio.h>
#include <stdlib.h>


float Cost(int gas, char type, char mode);




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
	int gas;
	float cost;
	char type, mode;
	printf("input your need!\n");
	scanf("%d,%c,%c", &gas, &type, &mode);
	cost = Cost(gas, type, mode);
	printf("it costs : %.2f\n", cost);
}

/*************************************************
	Function: 		Cost
	Description: 	计算加油消费
	Calls: 			scanf	printf
	Called By:		main
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
float Cost(int gas, char type, char mode)
{
	float res;
	if (type == 'a')
		res = 3.25;
	else if (type == 'b')
		res = 3.0;
	else if (type == 'c')
		res = 2.75;
	else 
	{
		printf("error\n");		
		exit(1);
	}

	if (mode == 'm')
		res *= 0.95 * gas;
	else if (mode == 'a')
		res *= 0.9 * gas;
	else 
	{
		printf("error\n");		
		exit(1);
	}
	
	return res;
}



