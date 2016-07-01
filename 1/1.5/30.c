/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ��Ե������С��
 *		Ҫ�㣺���������̿���
 * 		�ص㣺����for��������ã�����˼·���㷨
 *
 ********************************************************************************/

 
#include <stdio.h>



void InputNum(int num, int *f_array);
void OutputNum(int num, int *f_array);
void SwapMaxMin(int num, int *array);
void swap(int *f_iOne, int *f_iTwo);
int * FindMax(int num, int *array);
int * FindMin(int num, int *array);



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
	int array[100];
	int num;
	printf("input the number:\n");
	scanf("%d", &num);
	InputNum(num, array);
	OutputNum(num, array);
	SwapMaxMin(num, array);
	OutputNum(num, array);
}

/*************************************************
	Function: 		InputScore
	Description: 	������������
	Calls: 			scanf	printf
	Called By:		mian
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
void InputNum(int num, int *f_array)
{
	int i, j;
	printf("input the value:\n");
	for (i = 0; i < num; i++)
	{
		scanf("%d", &f_array[i]);
	}
}


/*************************************************
	Function: 		OutputScore
	Description: 	�������
	Calls: 			scanf	printf
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
void OutputNum(int num, int *f_array)
{
	int i, j;
	for (i = 0; i < num; i++)
	{
		printf("%d\t", f_array[i]);
	}
	printf("\n");
}
/*************************************************
	Function: 		SwapMaxMin
	Description: 	���������������Сֵ
	Calls: 			
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
void SwapMaxMin(int num, int *array)
{
	int * Max;
	int * Min;
	Max = FindMax(num, array);
	Min = FindMin(num, array);
	swap(Max, Min);
}


/*************************************************
	Function: 		swap
	Description: 	�����������洢����ֵ
	Calls: 			
	Called By:		
	Input: 			��
	Output: 		��
	Return: 		
*************************************************/
void swap(int *f_iOne, int *f_iTwo)
{
	int tmp;
	tmp = *f_iOne;
	*f_iOne = *f_iTwo;
	*f_iTwo = tmp;
}


/*************************************************
	Function: 		FindMax
	Description: 	��ѯ�����е����ֵ
					���������ֵ�ĵ�ַ
	Calls: 			
	Called By:		
	Input: 			��
	Output: 		��
	Return: 		���ֵ��ַ
*************************************************/
int * FindMax(int num, int *array)
{
	int i;
	int *res = array;
	for (i = 0; i < num; i++)
	{
		if (*res < array[i])
			res = array + i;
	}
	return res;
}

/*************************************************
	Function: 		FindMin
	Description: 	��ѯ�����е���Сֵ
					��������Сֵ�ĵ�ַ
	Calls: 			
	Called By:		
	Input: 			��
	Output: 		��
	Return: 		��Сֵ��ַ
*************************************************/
int * FindMin(int num, int *array)
{
	int i;
	int *res = array;
	for (i = 0; i < num; i++)
	{
		if (*res > array[i])
			res = array + i;
	}
	return res;
}



