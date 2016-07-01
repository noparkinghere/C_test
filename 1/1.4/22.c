/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：求某一个正整数的所有公因子
 *		要点：掌握for的灵活运用，程序思路和算法。
 *
 ********************************************************************************/

 
#include <stdio.h>

void PrintComFac(int num);

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
	PrintComFac(num);
}

/*************************************************
	Function: 		PrintComFac
	Description: 	打印共有因子
	Calls: 			printf
	Called By:		main
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
void PrintComFac(int num)
{
	int i;
	for (i = 1; i <= num; i++)
	{
		if (num % i == 0)
			printf("%d\t", i);
	}
}

