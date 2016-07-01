/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：百鸡百钱,注意理解题目，既要是1百钱，也要是1百鸡
 *		要点：宏定义的使用，作为常量的话，用宏定义往往比变量更合适。
 *
 ********************************************************************************/

 
#include <stdio.h>

#define COCK 5
#define HEN 3
#define CHICK 1
#define MONEY 100

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
	int i, j, k;
	for (i = 0; i < MONEY / COCK; i++)
	{
		for (j = 0; j < MONEY / HEN; j++)
		{
			for (k = 0; k < MONEY / CHICK; k++)
			{
				if (i * COCK + j * HEN + k * CHICK == MONEY	\
					&& i + j + 3 * k == 100)
					printf("cock:%d\then%d\tchicks:%d\n", i, j, k * 3);
			}
		}
	}
}

