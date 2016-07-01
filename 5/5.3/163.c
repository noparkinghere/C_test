/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ�����Ȼ�����ĵ�e�ļ���
 *		Ҫ�㣺��ѧ�������
 *		
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


#define PI 3.14159265


double fun(void);
double mul(double val, int num);
int fac(int num);



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
	double e;
	e = fun();
	printf("%lf", e);
}

/************************************************
	Function: 		fun
	Description: 	��e
	Calls: 			
	Called By:		
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
double fun(void)
{
	double res = 1.0;
	int i;
	for (i = 1; ; i++)
	{
		res += 1.0/fac(i);
		if (1.0/fac(i) < mul(0.1, 10))
		{
			break;
		}
		// printf("%lf\n", res);
	}
	return res;
}


/************************************************
	Function: 		fac
	Description: 	��׳�,�ݹ��㷨
	Calls: 			
	Called By:		
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
int fac(int num)
{
	return (num==0 ? 1 : num*fac(num-1));
}



/************************************************
	Function: 		mul
	Description: 	
	Calls: 			
	Called By:		
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
double mul(double val, int num)
{
	for (; num > 1; num--)
	{
		val *= val;
	}
	return val;
}
