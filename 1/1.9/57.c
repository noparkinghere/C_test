/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ��궨��ʵ�ֵ�λ����
 *		Ҫ�㣺�궨�壬λ����
 *
 ********************************************************************************/

 
#include <stdio.h>

#define AND(a,b)	(a&b)
#define OR(a,b)		(a|b)
#define EXCOR(a,b)	(a^b)
#define NOT(a)		(~a)


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
	int a, b, c, d;
	scanf("%d,%d,%d,%d", &a, &b, &c, &d);
	printf("%d, %d, %d, %d\n", AND(a, c), OR(b,d),EXCOR(a,d),NOT(a));
}




