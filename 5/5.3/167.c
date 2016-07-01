/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ�ţ�ٵ������ⷽ�̸�
 *		Ҫ�㣺��ѧ�������
 *		
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>



double GetRes(double a, double b, double c, double d, double x);
double GetRoot(double a, double b, double c, double d, double x);
double fun(double a, double b, double c, double d, double x);
double diff(double a, double b, double c, double x);



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
	double a, b, c, d, x;
	printf("enter the a,b,c,d:\n");
	scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
	printf("enter the evaluated x:\n");
	scanf("%lf", &x);
	// printf("the result is : %lf", GetRes(-5, 3, 6, 2, 1.5));
	printf("the result is : %lf", GetRes(a, b, c, d, x));
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
double GetRes(double a, double b, double c, double d, double x)
{
	int i;
	while (fun(a, b, c, d, x) > 0.00001 || fun(a, b, c, d, x) < -0.00001)
	{
		x = GetRoot(a, b, c, d, x);
	}

	return x;
}

/************************************************
	Function: 		GetRoot
	Description: 	���Ԥ��ֵ���
	Calls: 			
	Called By:		
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
double GetRoot(double a, double b, double c, double d, double x)
{
	double res;
	res = x - fun(a, b, c, d, x)/diff(a, b, c, x);
	return res;
}

/************************************************
	Function: 		fun
	Description: 	��������
	Calls: 			
	Called By:		
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
double fun(double a, double b, double c, double d, double x)
{
	return (a*x*x*x + b*x*x + c*x + d);
}

/************************************************
	Function: 		diff
	Description: 	��������
	Calls: 			
	Called By:		
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
double diff(double a, double b, double c, double x)
{
	return (3*a*x*x + 2*b*x + c);
}

