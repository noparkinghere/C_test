/****************************** (C) COPYRIGHT 2016 *******************************
 
 *  	���ܣ�ʹ��ָ���������Ԫ��
 *		Ҫ�㣺ָ���ʹ��
 * 
 ********************************************************************************/

 
#include <stdio.h>
#include <stdlib.h>


#define LEN 10


void InitArr(int *arr, int len);
void OutArr(int *arr, int len);


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

