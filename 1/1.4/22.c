/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ���ĳһ�������������й�����
 *		Ҫ�㣺����for��������ã�����˼·���㷨��
 *
 ********************************************************************************/

 
#include <stdio.h>

void PrintComFac(int num);

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
	PrintComFac(num);
}

/*************************************************
	Function: 		PrintComFac
	Description: 	��ӡ��������
	Calls: 			printf
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
void PrintComFac(int num)
{
	int i;
	for (i = 1; i <= num; i++)
	{
		if (num % i == 0)
			printf("%d\t", i);
	}
}

