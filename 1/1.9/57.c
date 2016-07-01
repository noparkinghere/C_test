/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：宏定义实现的位运算
 *		要点：宏定义，位运算
 *
 ********************************************************************************/

 
#include <stdio.h>

#define AND(a,b)	(a&b)
#define OR(a,b)		(a|b)
#define EXCOR(a,b)	(a^b)
#define NOT(a)		(~a)


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
	int a, b, c, d;
	scanf("%d,%d,%d,%d", &a, &b, &c, &d);
	printf("%d, %d, %d, %d\n", AND(a, c), OR(b,d),EXCOR(a,d),NOT(a));
}




