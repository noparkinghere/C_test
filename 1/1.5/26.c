/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ�����������
 *		Ҫ�㣺���������̿���
 * 		�ص㣺����for��������ã�����˼·���㷨
 *
 ********************************************************************************/

 
#include <stdio.h>


void InputFiveNum(int *num);
void OutputFiveNum(int *num);
void ReverseNum(int *f_array, int f_num);
void Swap(int *a, int *b);


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
	int num[5];
	printf("input the five number:\n");
	InputFiveNum(num);
	ReverseNum(num, 5);
	OutputFiveNum(num);
}

/*************************************************
	Function: 		InputFiveNum
	Description: 	�����������
	Calls: 			scanf	
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
void InputFiveNum(int *num)
{
	int i;
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &num[i]);
	}
	
	printf("the original number is:\n");
	for (i = 0; i < 5; i++)
	{
		printf("%d\t", num[i]);
	}
	printf("\n");
}

/*************************************************
	Function: 		ReverseNum
	Description: 	ת������
	Calls: 			scanf	
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
void ReverseNum(int *f_array, int f_num)
{
	int i;
	int tmp;
	
	//�û�ע�����
	for (i = 0; i < f_num / 2; i++)
	{
		Swap(f_array + i, f_array + f_num - 1 - i);//ע���û���ֵ��λ��
	}
}

/*************************************************
	Function: 		OutputFiveNum
	Description: 	����������
	Calls: 			printf	
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
void OutputFiveNum(int *num)
{
	int i;
	printf("the result is:\n");
	for (i = 0; i < 5; i++)
	{
		printf("%d\t", num[i]);
	}
}


/*************************************************
	Function: 		Swap
	Description: 	������������
	Calls: 			
	Called By:		SortThree
	Input: 			��
	Output: 		��
	Return: 		
*************************************************/
void Swap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

