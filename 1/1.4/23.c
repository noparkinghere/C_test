/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ�1ԪǮ�һ�����
 *		Ҫ�㣺���������̿���
 * 		�ص㣺����for��������ã�����˼·���㷨
 *
 ********************************************************************************/

 
#include <stdio.h>

#define ONE	1
#define TWO 2
#define FIVE 5

void SwapMoney(int num);



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
	scanf("%d", &num);			//���ٵ�λΪԪ
	SwapMoney(num);
}

/*************************************************
	Function: 		SwapMoney
	Description: 	��ĳԪǮ������ɽǡ�
	Calls: 				
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
void SwapMoney(int num)
{
	int one;
	int two;
	int five;
	num *= 10;

	for (one = 0; one <= num / ONE; one++)
	{
		for (two = 0; two <= num / TWO; two++)
		{
			for (five = 0; five <= num / FIVE; five++)
				if (ONE * one + TWO * two + FIVE * five == num)
				{
					printf("1:%d\t2:%d\t5:%d\n", one, two, five);
				}
		}
	}
}

