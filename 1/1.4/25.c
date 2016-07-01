/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ�����������Ȼ���ĸ�λ���ֵ�ƽ����,�ó��Ľ���ټ���ֱ��Ϊ1����145
 *		Ҫ�㣺���������̿���
 * 		�ص㣺����ȡ����λ���֣�����for��������ã�����˼·���㷨
 *
 ********************************************************************************/

 
#include <stdio.h>


void PrintRes(int num);
int GetSum(int res);



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
	
	PrintRes(num);
}


/*************************************************
	Function: 		PrintRes
	Description: 	��ӡ��������ֵ
	Calls: 			scanf	printf
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
void PrintRes(int num)
{
	int res = num;
	do
	{
		printf("%d->", res);
		res = GetSum(res);
		printf("\b=");			//����ɾ����+���=
		printf("%d\n", res);
	} while (1 != res && 145 != res);
}


/*************************************************
	Function: 		GetSum
	Description: 	�õ�ÿ�εĽ��
	Calls: 			
	Called By:		PrintRes
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
int GetSum(int res)
{
	int result = 0;
	while (res > 0)
	{
		printf("%d*%d+", res % 10, res % 10);
		result += (res % 10) * (res % 10);
		res /= 10;
	}
	return result;
}


