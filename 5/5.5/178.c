/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ��ݹ��������
 *		Ҫ�㣺�����е���ѧ����
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define NUM 5



// double tmp1;

bool fun(int num, int mem);

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
	for (i = 1; ; i++)	//��1��������Ѱ������ֵ
	{
		if (fun(i, NUM))
		{
			break;	
		}
	}
	printf("%d\n", i);
}

/*************************************************
	Function: 		fun
	Description: 	�ݹ��㷨�ж�����
	Calls: 			
	Called By:		
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
bool fun(int num, int mem)
{
	if (mem != 1)		//�ݹ鴦��һ�����
	{
		if (fun((num-1)/5*4, mem-1) && num%5==1)//�ر�ע��ݹ���㷨���ÿ�ν����ж����ж������Ƿ����㣬�Լ��Ӻ����Ƿ�����
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else		//ע��ݹ���Ҫ����������
	{
		return (num%5 == 1) ? true : false;	//�ݹ����һ�ε��ж�
	}
}



