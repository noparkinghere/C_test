/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ�ʵ�ֽ�10����ת��Ϊ16����
 *		Ҫ�㣺��������Ҫ�о����������� 
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
	int i;
	printf("input the number:\n");
	scanf("%d", &i);		//%d��ʾΪ10��������
	printf("%#X", i);		//#��Ϊ16���Ƶĸ�ʽ���ţ�%X��ʾΪ16�������
}
