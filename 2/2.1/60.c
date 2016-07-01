/****************************** (C) COPYRIGHT 2016 *******************************
 
 *  	功能：指针实现整数排列
 *		要点：指针的使用
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
	Description: 	主函数
	Calls: 			scanf	printf
	Called By:		编译器
	Input: 			无
	Output: 		无
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
	Description: 	初始化数组
	Calls: 			
	Called By:		main
	Input: 			无
	Output: 		无
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
	Description: 	排序数组
	Calls: 			
	Called By:		main
	Input: 			无
	Output: 		无
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
	Description: 	输出数组
	Calls: 			
	Called By:		main
	Input: 			无
	Output: 		无
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


