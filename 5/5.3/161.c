/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ��������ľ���ֵ
 *		Ҫ�㣺��ѧ�������
 *		
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>





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
	int num;
	scanf("%d", &num);
	printf("%d", abs(num));
}

/*************************************************
	Function: 		abs
	Description: 	���ؾ���ֵ
	Calls: 			
	Called By:		
	Input: 			��
	Output: 		��
	Return: 		0
	underline:		����ֻ�з���ֵ��ʱ��ʹ��
					���� ������ʽ��if��Ϊ������
*************************************************/
int abs(int num)
{
	return (num>0 ? num : -num);
}


