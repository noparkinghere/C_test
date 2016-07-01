/****************************** (C) COPYRIGHT 2016 *******************************
 
 *  	功能：使用指针查看数列中最大最小值。
 *		要点：简单的排序,如果只需要输出，未必需要中间量
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
	Description: 	主函数
	Calls: 			scanf	printf
	Called By:		编译器
	Input: 			无
	Output: 		无
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
	Description: 	打印输出数组数据
	Calls: 			scanf	printf
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

/*************************************************
	Function: 		InitArr
	Description: 	初始化数组
	Calls: 			scanf	printf
	Called By:		main
	Input: 			无
	Output: 		无
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
	Description: 	求数组中最大值
	Calls: 			
	Called By:		main
	Input: 			无
	Output: 		无
	Return: 		最大值
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
	Description: 	求数组中最小值
	Calls: 			
	Called By:		main
	Input: 			无
	Output: 		无
	Return: 		最小值
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

