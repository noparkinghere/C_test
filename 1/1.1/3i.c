/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：实现n进制转换为十进制
 *		要点：主要使用流程控制及函数 
 *		注意：实现的方法，这边采用的是数组把各位值存入，然后反向取出累积相乘累加
 *				仔细总结与2.c的区分。
 * 
 *********************************************************************************/

#include <stdio.h>

void OutPut(int f_iNum, int f_iBit);


/*************************************************
	Function: 		main
	Description: 	主函数
	Calls: 			scanf	printf	output
	Called By:		编译器
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
int main(void)
{
	int iBit;
	int iNum;
	printf("输入一个数据，输入这个数据的进制，用空格隔开:\n");
	printf("input a number and input the bit,seperating them with blankspace:\n");
	scanf("%d %d", &iNum, &iBit);
	
	OutPut(iNum ,iBit);
}

/*************************************************
	Function: 		OutPut
	Description: 	输出n进制转换为10进制的结果
	Calls: 			scanf	printf	output
	Called By:		编译器
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
void OutPut(int f_iNum, int f_iBit)
{
	int iRes = 0;
	int iArray[100];
	int i;
	for (i = 0; 0 != f_iNum; i++)
	{
		iArray[i] = f_iNum % 10;
		f_iNum /= 10;
	}
	
	for (; i > 0; i--)
	{
		iRes = iRes * f_iBit + iArray[i - 1];
	}
	printf("%d\n", iRes);
}

