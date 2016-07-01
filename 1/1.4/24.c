/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ�һ����λ���Ƿ���ڶԵ����磺63+47=36+74
 *		Ҫ�㣺���������̿���
 * 		�ص㣺����for��������ã�����˼·���㷨
 *
 ********************************************************************************/

 
#include <stdio.h>


int SwapNum(int num);
void JudgeSwap(int num);


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
	printf("input the number:\n");
	scanf("%d", &num);
	
	JudgeSwap(num);
}

/*************************************************
	Function: 		JudgeSwap
	Description: 	�ж�������ֵ�Ƿ�����
	Calls: 			
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
void JudgeSwap(int num)
{
	int i;
	for (i = 10; i <= 99; i ++)
	{
		//�ж������ų���1λ������ͬ��
		if (num + i == SwapNum(num) + SwapNum(i) && SwapNum(num) >= 10 \
				&& SwapNum(i) >= 10 && num != SwapNum(i))
			printf("%d + %d = %d + %d\n", num, i, SwapNum(num), SwapNum(i));
	}
}

/*************************************************
	Function: 		SwapNum
	Description: 	������ֵ��λ
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

