/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ��ݹ�����������
 *		Ҫ�㣺���������̿���
 * 		�ص㣺�ݹ��㷨�ĳ���ѧϰ
 *
 ********************************************************************************/

 
#include <stdio.h>


int GetAge(int num);


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
	int age;
	int num;
	printf("input the number:\n");
	scanf("%d", &num);
	age = GetAge(num);
	printf("%d", age);
}

int GetAge(int num)
{
	int age;
	if (1 == num)
		return 10;
	else
	{
		age = GetAge(num - 1) + 2;
		return age;
	}
}

