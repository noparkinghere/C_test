/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ�����Ԫ��֮��
 *		Ҫ�㣺���������̿���
 * 		�ص㣺����for��������ã�����˼·���㷨
 *
 ********************************************************************************/

 
#include <stdio.h>


void PrintRes(int * f_array, int num);
void InputFiveNum(int *num);



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
	int array[10];
	printf("input the ten number:\n");
	InputFiveNum(array);
	PrintRes(array, 10);
}

/*************************************************
	Function: 		InputFiveNum
	Description: 	����10������
	Calls: 			scanf	
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
void InputFiveNum(int *num)
{
	int i;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &num[i]);
	}
}

/*************************************************
	Function: 		PrintRes
	Description: 	��ӡ��Ҫ����Ľ��
	Calls: 			scanf	
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
void PrintRes(int * f_array, int num)
{
	int i;
	for (i = 0; i < num - 1; i++)
	{
		printf("%d\t", f_array[i] + f_array[i + 1]);
	}
}


