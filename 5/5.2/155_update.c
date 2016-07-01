/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ�������
 *		Ҫ�㣺����ѧӦ�ã�����Ȥ��
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int GetClose(int num);
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
	int res;
	//1-10000����������������
	for (i = 1; i <= 10000; i++)
	{
		if (res = GetClose(i))
		{
			printf("%d<->%d\n", i, res);
		}

	}	//end of for
}


/*************************************************
	Function: 		GetClose
	Description: 	�õ�������
	Calls: 			
	Called By:		
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
int GetClose(int num)
{
	int i;
	int res1 = 0;
	int res2 = 0;
	for (i = 2; i <= num/2; i++)
	{
		if (IsFac(num, i))
		{
			res1 += i;
		}
	}
	
	for (i = 2; i <= res1/2; i++)
	{
		if (IsFac(res1, i))
		{
			res2 += i;
		}
	}
	
	//�����﷽ʽ
	return ((res2==num && num<res1) ? res1 : 0);
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


