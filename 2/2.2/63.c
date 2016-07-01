/****************************** (C) COPYRIGHT 2016 *******************************
 
 *  	功能：用指针实现逆序存放数组元素值
 *		要点：简单的排序,如果只需要输出，未必需要中间量
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
	int *p = a;
	InitArr(p, LEN);
	InverseArr(p, LEN);
	OutArr(p, LEN);	
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
void InverseArr(int *arr, int len)
{
	int i, j;
	for (i = 0, j = len - 1; i < j; i++, j--)
		SWAP(arr[i], arr[j]);
}


