/****************************** (C) COPYRIGHT 2016 *******************************
 
 *  	���ܣ�����a��ƽ����b��ƽ��
 *		Ҫ�㣺�������������
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
	int a, b;
	printf("input the three number, seperating them with blankspace:\n");
	scanf("%d %d", &a, &b);
	printf("%d\n", a * a + b * b);
}
