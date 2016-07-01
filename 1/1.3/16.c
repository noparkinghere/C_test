/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：打印9*9乘法表
 *		要点：简单的流程控制结构
 * 
 ********************************************************************************/

 
#include <stdio.h>
#include <math.h>


#define PI 3.14

void MutiTable(void);


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
	MutiTable();
}

/*************************************************
	Function: 		MutiTable
	Description: 	乘法表输出
	Calls: 			printf
	Called By:		main
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
void MutiTable(void)
{
	int i, j;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d ", i, j, i * j);	//注意dos下一行不够打印
		}
		printf("\n");
	}
}

