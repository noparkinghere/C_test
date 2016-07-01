/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ�����վ����
 *		Ҫ�㣺���������̿���
 * 		�ص㣺����for��������ã�����˼·���㷨
 *
 ********************************************************************************/

 
#include <stdio.h>
#include <stdlib.h>


float Cost(int gas, char type, char mode);




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
	int gas;
	float cost;
	char type, mode;
	printf("input your need!\n");
	scanf("%d,%c,%c", &gas, &type, &mode);
	cost = Cost(gas, type, mode);
	printf("it costs : %.2f\n", cost);
}

/*************************************************
	Function: 		Cost
	Description: 	�����������
	Calls: 			scanf	printf
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
float Cost(int gas, char type, char mode)
{
	float res;
	if (type == 'a')
		res = 3.25;
	else if (type == 'b')
		res = 3.0;
	else if (type == 'c')
		res = 2.75;
	else 
	{
		printf("error\n");		
		exit(1);
	}

	if (mode == 'm')
		res *= 0.95 * gas;
	else if (mode == 'a')
		res *= 0.9 * gas;
	else 
	{
		printf("error\n");		
		exit(1);
	}
	
	return res;
}



