/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：一个两位数是否存在对调数如：63+47=36+74
 *		要点：函数，流程控制
 * 		重点：掌握for的灵活运用，程序思路和算法
 *
 ********************************************************************************/

 
#include <stdio.h>


int SwapNum(int num);
void JudgeSwap(int num);


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
	printf("input the number:\n");
	scanf("%d", &num);
	
	JudgeSwap(num);
}

/*************************************************
	Function: 		JudgeSwap
	Description: 	判定交换数值是否满足
	Calls: 			
	Called By:		main
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
void JudgeSwap(int num)
{
	int i;
	for (i = 10; i <= 99; i ++)
	{
		//判定条件排除了1位数和相同数
		if (num + i == SwapNum(num) + SwapNum(i) && SwapNum(num) >= 10 \
				&& SwapNum(i) >= 10 && num != SwapNum(i))
			printf("%d + %d = %d + %d\n", num, i, SwapNum(num), SwapNum(i));
	}
}

/*************************************************
	Function: 		SwapNum
	Description: 	交换数值各位
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

