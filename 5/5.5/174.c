/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ�������
 *		Ҫ�㣺�����е���ѧ����
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>




#define SUM		1020



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
	int i;
	int sum = SUM;
	for(i = 1; (sum=sum/2-2) != 0; i++)
	;
	printf("the day is :%d", i);
}



