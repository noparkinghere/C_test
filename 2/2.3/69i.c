
/****************************** (C) COPYRIGHT 2016 *******************************
 
 *  	功能：用指向函数的指针比较大小
 *		要点：指针的使用，注意指针函数和函数指针的区别
 * 
 ********************************************************************************/

 
#include <stdio.h>
#include <stdlib.h>


int min(int a, int b);


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
	int (*pMin)(int, int) = min;
	int a, b;
	// pMin = min;
	printf("input the two number:\n");
	scanf("%d%d", &a, &b);
	printf("Min:%d", (*pMin)(a, b));
}

int min(int a, int b)
{
	if (a > b)
		return b;
	else 
		return a;
}


