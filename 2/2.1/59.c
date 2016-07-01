/****************************** (C) COPYRIGHT 2016 *******************************
 
 *  	功能：指针实现数据的交换
 *		要点：指针的使用
 * 
 ********************************************************************************/

 
#include <stdio.h>
#include <stdlib.h>

void Swap(int *a, int *b);


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
	printf("input the a:\n");
	scanf("%d", &a);
	printf("input the b:\n");
	scanf("%d", &b);
	Swap(&a, &b);
	printf("a:%d\tb:%d\n", a, b);
}



/*************************************************
	Function: 		Swap
	Description: 	交换函数
	Calls: 			
	Called By:		main
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
void Swap(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}


