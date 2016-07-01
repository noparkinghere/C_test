/****************************** (C) COPYRIGHT 2016 *******************************
 
 *  	功能：3个数字的从小到大排序
 *		要点：简单的排序,如果只需要输出，未必需要中间量
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
	int a, b, c;
	printf("input the three number, seperating them with blankspace:\n");
	scanf("%d %d %d", &a, &b, &c);
	if (a < b && a < c)
	{
		printf("%d\t", a);
		if (b < c)
		{
			printf("%d\t", b);
			printf("%d\t", c);			
		}		
		else 
		{
			printf("%d\t", c);
			printf("%d\t", b);			
		}	
	}
	if (b < c && b < a)
	{
		printf("%d\t", b);
		if (a < c)
		{
			printf("%d\t", a);
			printf("%d\t", c);			
		}		
		else 
		{
			printf("%d\t", c);
			printf("%d\t", a);			
		}	
	}
	if (c < b && c < a)
	{
		printf("%d\t", c);
		if (a < b)
		{
			printf("%d\t", a);
			printf("%d\t", b);			
		}		
		else 
		{
			printf("%d\t", b);
			printf("%d\t", a);			
		}		
	}
	printf("\n");
}
