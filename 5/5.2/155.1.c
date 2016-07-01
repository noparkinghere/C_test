/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：获得所有因子
 *		要点：简单数学应用，整数趣题
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


bool GetFac(int num);



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
	while (1)
	{
		scanf("%d", &num);
		GetFac(num);
	}
}


/*************************************************
	Function: 		GetFac
	Description: 	得出所有的非1和自身的因子
	Calls: 			
	Called By:		
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
bool GetFac(int num)
{
	int i;
	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			printf("%d\t", i);
		}
	}
	printf("\n");
}



