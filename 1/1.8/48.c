/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：计算灯塔数量
 *		要点：函数，流程控制
 * 		重点：掌握for的灵活运用，程序思路和算法
 *
 ********************************************************************************/

 
#include <stdio.h>


void PutCal(int sum);



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
	int sum;
	printf("input the number:\n");
	scanf("%d", &sum);
	PutCal(sum);
}


/*************************************************
	Function: 		PutCal
	Description: 	输出结果
	Calls: 			
	Called By:		main
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
void PutCal(int sum)
{
	int i, j;
	int tmp;
	int res;
	for (j = 1; res != sum; j++)
	{
		tmp = j;
		res = 0;
		for (i = 0; i < 8; i++)
		{
			res = res + tmp;
			tmp *= 2;
		}		
	}
	printf("result:%d\t%d\t%d\n", j - 1, tmp / 2, res);
}


