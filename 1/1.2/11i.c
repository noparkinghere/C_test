/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：随机加减法运算
 *		要点：随机函数的调用，模块设计流程控制
 * 
 ********************************************************************************/

 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char ScoreJudge(int input);
int RanFun(char symbol, int max);


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
	char symbol;
	int max;

	printf("select the sign:\n");
	scanf("%c", &symbol);
	printf("input the max number:\n");
	scanf("%d", &max);
	// printf("%d\n", time(0));
	srand((unsigned long)time(0));	//系统时钟种子设定，可以根据时间产生随机数据

	RanFun(symbol, max);	
}

int RanFun(char symbol, int max)
{
	int tmp1, tmp2;
	int res;
	
	tmp1 = rand() % max;
	tmp2 = rand() % max;
	if ('+' == symbol)
	{
		res = tmp1 + tmp2;
		printf("%d + %d = %d\n", tmp1, tmp2, res);
		return 0;
	}
	else if ('-' == symbol)
	{
		res = tmp1 - tmp2;
		printf("%d - %d = %d\n", tmp1, tmp2, res);
		return 0;
	}
	else
	{
		printf("error symbol!\n");
		exit(1);
	}
}

