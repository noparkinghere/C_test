/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ����ػ�����
 *		Ҫ�㣺����ѧӦ�ã�����Ȥ��
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int GetBit(int num, int bit);
bool IsTriMos(int num);
bool IsMos(int num);
int LenNum(int num);





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
	for (i = 10; i <= 10000; i++)
	{
		if (IsTriMos(i))
		{
			printf("%d\t%d\t%d\n", i, i*i, i*i*i);
		}
	}
}


/*************************************************
	Function: 		IsTriMos
	Description: 	�ж��Ƿ������ػ�����
	Calls: 			
	Called By:		
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
bool IsTriMos(int num)
{
	if (IsMos(num) && IsMos(num * num) & IsMos(num*num*num))
	{
		return true;
	}
	else
	{
		return false;
	}
}

/*************************************************
	Function: 		IsMos
	Description: 	�ж��Ƿ��ǻ�����
	Calls: 			
	Called By:		
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
bool IsMos(int num)
{
	int i;
	int len = LenNum(num);
	for (i = 1; i <= len; i++)
	{
		if (GetBit(num, i) != GetBit(num, len + 1 - i))
		{
			return false;
		}
	}
	return true;
}

/*************************************************
	Function: 		LenNum
	Description: 	���ֳ���
	Calls: 			
	Called By:		
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
int LenNum(int num)
{
	int i;
	for (i = 1; (num /= 10) != 0; i++)
	;
	return i;
}


/*************************************************
	Function: 		GetBit
	Description: 	ȡ��bitλ��ֵ
	Calls: 			
	Called By:		
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
int GetBit(int num, int bit)
{
	int i;
	for (i = 0; i < bit - 1; i++)
	{
		num /= 10;
	}
	return (num % 10);	//����ĩβֵ
}


