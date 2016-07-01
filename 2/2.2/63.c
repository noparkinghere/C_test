/****************************** (C) COPYRIGHT 2016 *******************************
 
 *  	���ܣ���ָ��ʵ������������Ԫ��ֵ
 *		Ҫ�㣺�򵥵�����,���ֻ��Ҫ�����δ����Ҫ�м���
 * 
 ********************************************************************************/

 
#include <stdio.h>
#include <stdlib.h>


#define LEN 10
#define SWAP(a,b)	{a = a + b;	\
					b = a - b;	\
					a = a - b;}

					
void InitArr(int *arr, int len);
void OutArr(int *arr, int len);
void InverseArr(int *arr, int len);



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
	int *p = a;
	InitArr(p, LEN);
	InverseArr(p, LEN);
	OutArr(p, LEN);	
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
void InverseArr(int *arr, int len)
{
	int i, j;
	for (i = 0, j = len - 1; i < j; i++, j--)
		SWAP(arr[i], arr[j]);
}


