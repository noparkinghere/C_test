
/****************************** (C) COPYRIGHT 2016 *******************************
 
 *  	���ܣ���ָ������ָ��Ƚϴ�С
 *		Ҫ�㣺ָ���ʹ�ã�ע��ָ�뺯���ͺ���ָ�������
 * 
 ********************************************************************************/

 
#include <stdio.h>
#include <stdlib.h>


int min(int a, int b);


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


