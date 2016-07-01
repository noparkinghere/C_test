/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：比较计数
 *		要点：结构体的初步应用和了解
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
	Description: 	将数组内容进行重新排序
	Calls: 			
	Called By:		main
	Input: 			无
	Output: 		无
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
	Description: 	输出结果内容
	Calls: 			
	Called By:		main
	Input: 			无
	Output: 		无
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
	Description: 	交换变量的内容
	Calls: 			
	Called By:		main
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
void swap(stru *a, stru *b)
{
	stru tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
