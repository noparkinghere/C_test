/****************************** (C) COPYRIGHT 2016 *******************************
 
 *  	���ܣ�3�����ֵĴ�С��������
 *		Ҫ�㣺�򵥵�����,���ֻ��Ҫ�����δ����Ҫ�м���
 * 
 ********************************************************************************/

 
#include <stdio.h>


/*************************************************
	Function: 		main
	Description: 	������
	Calls: 			scanf	printf
	Called By:		������
	Input: 			��
	Output: 		��
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
