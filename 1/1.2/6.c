/****************************** (C) COPYRIGHT 2016 *******************************
 
 *  	功能：计算a的平方加b的平方
 *		要点：简单输入输出程序
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
	int a, b;
	printf("input the three number, seperating them with blankspace:\n");
	scanf("%d %d", &a, &b);
	printf("%d\n", a * a + b * b);
}
