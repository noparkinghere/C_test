/****************************** (C) COPYRIGHT 2016 *******************************
 
 *  	功能：寻找第一个相同元素
 *		要点：
 * 
 ********************************************************************************/

 
#include <stdio.h>
#include <stdlib.h>


#define MALLOC(type,n)	((type*)malloc(sizeof(type)*n))
#define LEN	10



int * DelArr(int *p);
int * InitArr(int len);
int Search(int len, int *One, int *Two);



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
	int *One, *Two, res;
	//这边可以适当定制LEN的值，或者通过用户输入
	printf("the first is :\n");
	One = InitArr(LEN);	
	printf("the second is :\n");
	Two = InitArr(LEN);
	res = Search(LEN, One, Two);
	printf("the same element is :%d\n", res);
	One = DelArr(One);
	Two = DelArr(Two);
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
int * InitArr(int len)
{
	int i;
	int *arr = MALLOC(int, len);
	for (i = 0; i < len; i++)
	{
		scanf("%d", arr + i);
	}
	return arr;
}

/*************************************************
	Function: 		DelArr
	Description: 	清除堆空间
	Calls: 			scanf	printf
	Called By:		main
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
int * DelArr(int *p)
{
	free(p);
	return NULL;
}

/*************************************************
	Function: 		Search
	Description: 	搜索出相同的第一个元素返回
	Calls: 			scanf	printf
	Called By:		main
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
int Search(int len, int *One, int *Two)
{
	int i, j;
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < len; j++)
		{
			if (One[i] == Two[j])
				return One[i];
		}
	}
}


