/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ���1 + 1/2 + 1/3 + ... + 1/n
 *		Ҫ�㣺���������̿���
 * 		�ص㣺����for��������ã�����˼·���㷨
 *
 ********************************************************************************/

 
#include <stdio.h>


int GetNum(int num);
int SwapNum(int num);


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
	printf("the four figures:\n");

	GetNum(num);
}


/*************************************************
	Function: 		GetNum
	Description: 	��Ҫ��������
	Calls: 			
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
int GetNum(int num)
{
	int i;
	for (i = 1000; i < 10000; i++)
	{
		if (i * 9 == SwapNum(i))
			printf("%d\t%d\n", i, SwapNum(i));
	}
}

/*************************************************
	Function: 		SwapNum
	Description: 	������ֵ
	Calls: 			
	Called By:		JudgeSwap
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
int SwapNum(int num)
{
	int res = 0;
	if (num <= 0)
		return 0;
	
	do
	{
		res = res * 10 + num % 10;
		num /= 10;
	} while (num > 0);
	
	return res;
}

