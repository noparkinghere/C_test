/****************************** (C) COPYRIGHT 2016 *******************************
 
 *  	���ܣ����Ʋ������������Ŷѿռ�
 *		Ҫ�㣺
 * 
 ********************************************************************************/

 
#include <stdio.h>
#include <stdlib.h>

#define MALLOC(type,n)	((type*)malloc(sizeof(type)*n))




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
	while(1)
	{
		MALLOC(int, 100);
	}
}