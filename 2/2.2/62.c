/****************************** (C) COPYRIGHT 2016 *******************************
 
 *  	功能：使用指针输出数组元素
 *		要点：指针的使用
 * 
 ********************************************************************************/

 
#include <stdio.h>
#include <stdlib.h>


#define LEN 10


void InitArr(int *arr, int len);
void OutArr(int *arr, int len);


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

