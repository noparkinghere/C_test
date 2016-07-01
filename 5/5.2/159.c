/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ�һ����ƽ��
 *		Ҫ�㣺����ѧӦ�ã�����Ȥ��
 *		
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>



typedef unsigned long int u32;


int Bit(int num, int bit);
bool IsMatch(u32 num);
bool IsSquare(int num);


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
	int j;
	for (i = 100000, j = 0; i < 1000000; i++)
	{
		if (IsMatch(i))
		{
			printf("%d\t", i);
			j++;
		}
	}
	printf("\nThe number is : %d\n", j);
}


/*************************************************
	Function: 		IsMatch
	Description: 	ƥ������
	Calls: 			scanf	printf
	Called By:		������
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
bool IsMatch(u32 num)
{
	int num1 = Bit(num,1) + 10*Bit(num,2) + 100*Bit(num,3);
	int num2 = Bit(num,4) + 10*Bit(num,5) + 100*Bit(num,6);
	if (IsSquare(num) && IsSquare(num1) && IsSquare(num2))
	{
		return true;
	}
	else
	{
		return false;
	}
}

/*************************************************
	Function: 		Bit
	Description: 	���λ����
	Calls: 			
	Called By:		
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
int Bit(int num, int bit)
{
	for (; bit > 1; bit--, num/=10)
	;
	return (num % 10);
}

/*************************************************
	Function: 		IsSquare
	Description: 	�ж��Ƿ���ƽ����
	Calls: 			
	Called By:		
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
bool IsSquare(int num)
{
	int tmp = (int)sqrt(num);
	return tmp*tmp == num ? true : false;
}
