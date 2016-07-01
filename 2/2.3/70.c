/****************************** (C) COPYRIGHT 2016 *******************************
 
 *  	功能：使用返回指针的函数查找最大值
 *		要点：注意函数指针和指针函数的区别
 * 
 ********************************************************************************/

 
#include <stdio.h>
#include <stdlib.h>

#define MALLOC(type,n)	((type*)malloc(sizeof(type)*n))


void InitArr(int num, int *pValue);
// void OutArr(int num, int *pValue);
int *Max(int num, int *pValue);


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
	int *pValue;
	int num;
	int *res;
	printf("the numbers is :\n");
	scanf("%d", &num);
	pValue = MALLOC(int, num);
	InitArr(num, pValue);
	res = Max(num, pValue);
	printf("max:%d\n", *res);
	free(pValue);
	pValue = NULL;
}

/*************************************************
	Function: 		Max
	Description: 	返回最大值的指针
	Calls: 			
	Called By:		main
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
int *Max(int num, int *pValue)
{
	int i;
	int tmp = 0;
	for (i = 0; i < num; i++)
	{
		if (pValue[tmp] < pValue[i])
			tmp = i;
	}
	return (pValue + tmp);
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
void InitArr(int num, int *pValue)
{
	int i;
	for (i = 0; i < num; i++)
	{
		scanf("%d", &pValue[i]);
	}
}

// void OutArr(int num, int *pValue)
// {
	// int i;
	// for (i = 0; i < num; i++)
	// {
		// printf("%d\t", pValue[i]);
	// }
	// printf("\n");
// }
