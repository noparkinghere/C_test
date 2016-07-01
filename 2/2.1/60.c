/****************************** (C) COPYRIGHT 2016 *******************************
 
 *  	���ܣ�ָ��ʵ����������
 *		Ҫ�㣺ָ���ʹ��
 * 
 ********************************************************************************/

 
#include <stdio.h>
#include <stdlib.h>


#define MALLOC(n,type)	((type*)malloc(sizeof(type)*n))
#define SWAP(a,b)	{a = a + b; \
					b = a - b; \
					a = a - b;}

					
void OutArr(int *arr, int len);
int *InitArr(int len);
void SortArr(int *arr, int len);


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
	int *arr;
	int len;
	printf("input the array length:\n");
	scanf("%d", &len);
	printf("input the array:\n");	
	arr = InitArr(len);
	SortArr(arr, len);
	OutArr(arr, len);
	free(arr);
	arr = NULL;
}

/*************************************************
	Function: 		InitArr
	Description: 	��ʼ������
	Calls: 			
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
int *InitArr(int len)
{
	int i;
	int *arr = MALLOC(len, int);
	if (NULL == arr)
	{
		printf("malloc error!\n");
		exit(-1);		
	}
	for (i = 0; i < len; i++)
	{
		scanf("%d", arr + i);
	}
	return arr;
}

/*************************************************
	Function: 		SortArr
	Description: 	��������
	Calls: 			
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
void SortArr(int *arr, int len)
{
	int i, j;
	for (i = 0; i < len - 1; i++)
	{
		for (j = i + 1; j < len; j++)
		{
			if (arr[i] > arr[j])
			{
				SWAP(arr[i], arr[j]);
			}
		}
	}
}

/*************************************************
	Function: 		OutArr
	Description: 	�������
	Calls: 			
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


