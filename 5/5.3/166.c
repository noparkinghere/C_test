/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ����ַ���ⷽ��
 *		Ҫ�㣺��ѧ�������
 *		
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>



double GetRes(double a, double b);


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
	double a, b;
	printf("enter the a,b:\n");
	scanf("%lf%lf", &a, &b);
	printf("the result is : %lf", GetRes(a, b));
}

/************************************************
	Function: 		GetRes
	Description: 	��ø����
	Calls: 			
	Called By:		
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
double GetRes(double a, double b)
{
	double res = (a+b) / 2;
	while ((b-res) > 0.00000001)
	{
		sin(res)>0 ? a=res : b=res;	
		res = (a+b) / 2;
	}
	return res;
}

