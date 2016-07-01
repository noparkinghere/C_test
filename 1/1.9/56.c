/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：用宏定义实现互换
 *		要点：宏定义使用，宏函数的思想
 * 		重点：一般不会在宏定义中使用复杂的操作，但如果底层编程的话也会使用
 *
 ********************************************************************************/

 
#include <stdio.h>

#define LEN 5
//尤其注意宏定义时 反斜杠换行符是必须的！
// #define SWAP(a,b)	{int c;		\
						// c=a;	\
						// a=b;	\
						// b=c;}						
#define SWAP(a,b)	{a = a + b;	\
					b = a - b;	\
					a = a - b;}

						
void OutArr(int *arr, int len);
void InitArr(int *arr, int len);

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
	int i;
	int a[LEN], b[LEN];
	printf("input the array a:\n");
	InitArr(a, LEN);
	printf("input the array b:\n");
	InitArr(b, LEN);
	for (i = 0; i < LEN; i++)
	{
		SWAP(a[i], b[i]);
	}
	OutArr(a, LEN);
	OutArr(b, LEN);
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

