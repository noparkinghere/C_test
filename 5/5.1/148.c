/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ���������
 *		Ҫ�㣺����ѧӦ��
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>



bool IsPrime(int num);


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
	int num1;
	int num2;
	printf("num1:");
	scanf("%d", &num1);
	printf("num1:");
	scanf("%d", &num2);
	
	for (; num1 <= num2; num1++)
	{
		if (IsPrime(num1))
		{
			printf("%d\t", num1);
		}
	}

}


/*************************************************
	Function: 		IsPrime
	Description: 	�ж��Ƿ�������
	Calls: 			scanf	printf
	Called By:		������
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
bool IsPrime(int num)
{
	int i;
	for (i = 2; i < num / 2; i++)
	{
		if (num % i == 0)
			return false;
	}
	return true;
}	

