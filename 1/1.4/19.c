/****************************** (C) COPYRIGHT 2016 *******************************
 
 *  	���ܣ�3�����ֵĴ�С��������
 *		Ҫ�㣺�򵥵�����,���ֻ��Ҫ�����δ����Ҫ�м���
 * 
 ********************************************************************************/

 
#include <stdio.h>

double Cal1(int f_count);
double Cal2(int f_count);


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
	int count;
	double res;
	printf("input the three number:\n");
	scanf("%d", &count);
	res = Cal1(count);
	printf("%lf\n", res);
	res = Cal2(count);
	printf("%lf\n", res);
}

/*************************************************
	Function: 		Cal1
	Description: 	���㺯��
	Calls: 			scanf	printf
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		����ֵ
*************************************************/
double Cal1(int f_count)
{
	int i;
	int tmp;
	double res;
	int a1 = 2;
	int a2 = 3;
	int b1 = 1;
	int b2 = 2;
	res = (double)a1 / b1;
	if (1 == f_count)
	{
		return res;
	}
	else
	{
		for (i = 2; i <= f_count; i++)
		{
			res += (double)a2 / b2;
			tmp = a2;
			a2 += a1;
			a1 = a2;
			tmp = b2;
			b2 += b1;
			b1 = b2;
		}	
	}
	return res;
}

/*************************************************
	Function: 		Cal2
	Description: 	���㺯��
	Calls: 			scanf	printf
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		����ֵ
*************************************************/
double Cal2(int f_count)
{
	int i;
	int tmp;
	double res = 0;
	int a1 = 2;
	int a2 = 1;
	for (i = 1; i <= f_count; i++)
	{
		res += (double)a1 / a2;
		tmp = a2;
		a2 = a1;
		a1 += tmp;
	}
	return res;
}

