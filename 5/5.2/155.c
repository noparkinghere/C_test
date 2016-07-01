/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ�������
 *		Ҫ�㣺����ѧӦ�ã�����Ȥ��
 *		ע�⣺ͨ�÷����޷����������⣬�㷨ʱ�临�Ӷȹ��ߣ�����ʱ̫����
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>



bool IsClose(int num1, int num2);
bool IsFac(int num, int i);






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
	int j;
	//1-10000��������
	for (i = 1; i <= 10000; i++)
	{
		//����Ѱ��������
		for (j = i + 1; j <= 10000; j++)
		{
			if (IsClose(i, j))
			{
				printf("%d<->%d\n", i, j);
			}
		}
	}	//end of for
}


/*************************************************
	Function: 		IsClose
	Description: 	�ж��Ƿ���������
	Calls: 			
	Called By:		
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
bool IsClose(int num1, int num2)
{
	int i;
	int res1 = 0;
	int res2 = 0;
	for (i = 2; i < num1; i++)
	{
		if (IsFac(num1, i))
		{
			res1 += i;
		}
	}
	
	for (i = 2; i < num2; i++)
	{
		if (IsFac(num2, i))
		{
			res2 += i;
		}
	}
	
	//�����﷽ʽ
	return (res1==num2 && res2==num1) ? true : false;
}

/*************************************************
	Function: 		IsFac
	Description: 	�ж��Ƿ�Ϊ����
	Calls: 			
	Called By:		
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
bool IsFac(int num, int i)
{
	return (num%i==0 ? true : false);
}


