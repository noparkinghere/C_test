/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ���ӡ��׻÷�
 *		Ҫ�㣺���������̿���
 * 		�ص㣺����for��������ã�����˼·���㷨
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
	int num;
	double res;
	printf("input the number:\n");
	scanf("%d", &num);
	
	res = SumMuti(num);
	printf("%.2lf", res);
}
