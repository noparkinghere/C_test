/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ�������
 *		Ҫ�㣺����ѧӦ�ã�����Ȥ��
 *		ע�⣺ͨ�÷�����Ȼ���Խ��������⣬���������̫����Ҫ��64��32λ���ͣ�
 *			�ң�ע�ⲻͬ���ͼ��ǿ��ת����������������������������Ҫ˼���㷨��
 *			��һ��������ѧ�����ſ��Խ����������ڳ���32λʱ������㡣
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>



typedef unsigned long int u32;
typedef unsigned long long int u64;



int GetBit(u64 num, int i);
bool IsGui(u32 num);
int GetLen(u32 num);
bool IsGuiTest(void);	//���Գ���



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
	u32 i;
	//IsGuiTest();
	for (i = 0; i <= 1000000; i++)
	{
		if (IsGui(i))
		{
			printf("%d\t", i);
		}
	}
}


/*************************************************
	Function: 		IsGui
	Description: 	�ж��Ƿ���������
	Calls: 			
	Called By:		
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
bool IsGui(u32 num)
{
	u64 targ = (u64)num * num;
	int len = GetLen(num);
	int i;
	for (i = 1; i <= len; i++)
	{
		if (GetBit(num, i) != GetBit(targ, i))
		{
			return false;
		}
	}
	return true;
}


/*************************************************
	Function: 		GetBit
	Description: 	���ĳһλ����
	Calls: 			
	Called By:		
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
int GetBit(u64 num, int i)
{
	while (--i)
	{
		num /= 10;
	}
	return (num % 10);
}


/*************************************************
	Function: 		GetLen
	Description: 	������ֳ���
	Calls: 			
	Called By:		
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
int GetLen(u32 num)
{
	int len;
	for (len = 1; (num /= 10) != 0; len++)
	;
	return len;
}

/*************************************************
	Function: 		IsGui
	Description: 	�ж��Ƿ���������
	Calls: 			
	Called By:		
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
bool IsGuiTest(void)
{
	u32 tmp;
	u64 targ;
	int len;
	int i;
	scanf("%ld", &tmp);
	len = GetLen(tmp);
	targ = (u64)tmp * tmp;
	printf("%d\t%lld\t%d\n", tmp, targ, len);
	
	for (i = 1; i <= len; i++)
	{
		printf("%d,%d\n", GetBit(tmp, i), GetBit(targ, i));
		if (GetBit(tmp, i) != GetBit(targ, i))
		{
			printf("error\n");
		}
	}

}


