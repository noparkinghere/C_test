/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ���1 + 1/2 + 1/3 + ... + 1/n
 *		Ҫ�㣺���������̿���
 * 		�ص㣺����for��������ã�����˼·���㷨
 *
 ********************************************************************************/

 
#include <stdio.h>


double SumMuti(int num);


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

double SumMuti(int num)
{
	double res = 0.0;
	int i;
	for (i = 1; i <= num; i++)
	{
		res += (double)(1.0 / i);
//		printf("%lf\t", res);
	}
	return res;
}


