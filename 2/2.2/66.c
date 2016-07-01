/****************************** (C) COPYRIGHT 2016 *******************************
 
 *  	���ܣ�ʹ��ָ��鿴�����������Сֵ��
 *		Ҫ�㣺�򵥵�����,���ֻ��Ҫ�����δ����Ҫ�м���
 * 
 ********************************************************************************/

 
#include <stdio.h>
#include <stdlib.h>


#define LEN	10



void InitArr(int *arr, int len);
void OutArr(int *arr, int len);
int MaxArr(int *arr, int len);
int MinArr(int *arr, int len);


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
	int a[LEN];
	InitArr(a, LEN);
	printf("MAX:%d\tMIN:%d\n", MaxArr(a, LEN), MinArr(a, LEN));
}

/*************************************************
	Function: 		InitArr
	Description: 	��ӡ�����������
	Calls: 			scanf	printf
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
void OutArr(int *arr, int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		printf("%d\t", arr[i]);
	}	
	printf("\n");
}

/*************************************************
	Function: 		InitArr
	Description: 	��ʼ������
	Calls: 			scanf	printf
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
void InitArr(int *arr, int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		scanf("%d", arr + i);
	}
}

/*************************************************
	Function: 		MaxArr
	Description: 	�����������ֵ
	Calls: 			
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		���ֵ
*************************************************/
int MaxArr(int *arr, int len)
{
	int res, i;
	for (i = 0; i < len; i++)
	{
		if (res < arr[i])
			res = arr[i];
	}
	return res;
}

/*************************************************
	Function: 		MinArr
	Description: 	����������Сֵ
	Calls: 			
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		��Сֵ
*************************************************/
int MinArr(int *arr, int len)
{
	int res, i;
	for (i = 0; i < len; i++)
	{
		if (res > arr[i])
			res = arr[i];
	}
	return res;
}

