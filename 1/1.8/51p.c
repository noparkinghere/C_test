/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：老师分糖果问题，题意不清楚，补充：每个小朋友最终分得一样多的糖果
 *		要点：流程控制
 *
 ********************************************************************************/

 
#include <stdio.h>




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
	int i, j;
	int rest, sum1, sum2;
	int flag = 0;
	for (i = 1; rest != 0 || flag != 0; i++)	//i为总共份数
	{
		sum1 = 0;
		sum2 = 0;
		for (j = 1, rest = i; j < i && rest != 0; j++)	//j为学生人数
		{
			sum1 = sum2;
			sum2 = j + (rest - j) / 10;
			rest = rest - sum2;
			if (sum1 != sum2)
			{
				flag = 1;
				break;
			}
		}
	}
	printf("%d\t%d\n", i - 1);
}




