/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：1元钱兑换方案
 *		要点：函数，流程控制
 * 		重点：掌握for的灵活运用，程序思路和算法
 *
 ********************************************************************************/

 
#include <stdio.h>

#define ONE	1
#define TWO 2
#define FIVE 5

void SwapMoney(int num);



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
	scanf("%d", &num);			//最少单位为元
	SwapMoney(num);
}

/*************************************************
	Function: 		SwapMoney
	Description: 	将某元钱，换算成角。
	Calls: 				
	Called By:		main
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
void SwapMoney(int num)
{
	int one;
	int two;
	int five;
	num *= 10;

	for (one = 0; one <= num / ONE; one++)
	{
		for (two = 0; two <= num / TWO; two++)
		{
			for (five = 0; five <= num / FIVE; five++)
				if (ONE * one + TWO * two + FIVE * five == num)
				{
					printf("1:%d\t2:%d\t5:%d\n", one, two, five);
				}
		}
	}
}

