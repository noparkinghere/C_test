/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ��Ƚϼ���
 *		Ҫ�㣺�ṹ��ĳ���Ӧ�ú��˽�
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>

#define NUM 5




typedef struct
{
	int num;
	int val;
}stru;


void sort(stru *a);
void output(stru *a);
void swap(stru *a, stru *b);


int main(void)
{
	stru a[5];
	int i;
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &a[i].num);
		scanf("%d", &a[i].val);
	}
	sort(a);
	output(a);
}

/*************************************************
	Function: 		sort
	Description: 	���������ݽ�����������
	Calls: 			
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
void sort(stru *a)
{
	int i, j;
	for (i = 0; i < 4; i++)
	{
		for (j = i + 1; j < 5; j++)
		{
			if (a[i].num > a[j].num)
				swap(&a[i], &a[j]);
		}
	}
}

/*************************************************
	Function: 		output
	Description: 	����������
	Calls: 			
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
void output(stru *a)
{
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("%d\t", a[i].num);
		printf("%d\n", a[i].val);
	}
}

/*************************************************
	Function: 		swap
	Description: 	��������������
	Calls: 			
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
void swap(stru *a, stru *b)
{
	stru tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
