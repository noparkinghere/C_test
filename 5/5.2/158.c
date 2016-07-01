/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：神奇数字6174
 *		要点：简单数学应用，整数趣题
 *		
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


#define LEN		4


// typedef unsigned long int u32

int GetBit(int num, int bit);
int Max(int num);
int Min(int num);
void Sort(int *a);
void Swap(int *num1, int *num2);
bool Isdiff(int num);
int Fun(int num, FILE *fp);



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
	FILE *fp;
	if ((fp = fopen("c:\\haha", "w+")) == NULL)
	{
		printf("cannot open!");
		exit(0);
	}
	for (i = 1000; i <= 9999; i++)
	{
		if (Isdiff(i))
		{
			Fun(i, fp);
			fprintf(stdout, "-----------------------------------\n");
			fprintf(fp, "-----------------------------------\n");
		}
	}	//end of for
}


/*************************************************
	Function: 		Fun
	Description: 	实现神奇数字功能，并打印
	Calls: 			
	Called By:		
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
int Fun(int num, FILE *fp)
{
	int res = Max(num)-Min(num);
	if (num != 6174)
	{
		printf("%d\t->\t%d - %d = %d\n", num, Max(num), Min(num), res);
		fprintf(fp, "%d\t->\t%d - %d = %d\n", num, Max(num), Min(num), res);
		Fun(res, fp);
	}
	else
	{
		return res;
	}
}


/*************************************************
	Function: 		Max
	Description: 	四位数重排最大数
	Calls: 			
	Called By:		
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
int Max(int num)
{
	int a[LEN];
	int i;
	int res = 0;
	for (i = 0; i < LEN; i++)
	{
		a[i] = GetBit(num, i+1);
	}
	Sort(a);
	for (i = LEN-1; i >= 0; i--)
	{
		res = res*10 + a[i];
	}
	return res;
}



/*************************************************
	Function: 		Min
	Description: 	四位数重排最小数
	Calls: 			
	Called By:		
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
int Min(int num)
{
	int a[LEN];
	int i;
	int res = 0;
	for (i = 0; i < LEN; i++)
	{
		a[i] = GetBit(num, i+1);
	}
	Sort(a);
	for (i = 0; i < LEN; i++)
	{
		res = res*10 + a[i];
	}
	return res;
}



/*************************************************
	Function: 		Sort
	Description: 	将数组排序
	Calls: 			
	Called By:		
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
void Sort(int *a)
{
	int i, j;
	for (i = 0; i < LEN-1; i++)
	{
		for (j = i+1; j < LEN; j++)
		{
			if (a[i] > a[j])
			{
				Swap(&a[i], &a[j]);
			}
		}
	}	//end of for
}



/*************************************************
	Function: 		swap
	Description: 	交换值
	Calls: 			
	Called By:		
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
void Swap(int *num1, int *num2)
{
	int tmp;
	tmp = *num1;
	*num1 = *num2;
	*num2 = tmp;
}


/*************************************************
	Function: 		GetBit
	Description: 	获得某位值
	Calls: 			
	Called By:		
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
int GetBit(int num, int bit)
{
	for (; bit > 1; bit--, num /= 10)
	;
	return (num % 10);
}


/*************************************************
	Function: 		Isdiff
	Description: 	判断是否各位不同
	Calls: 			
	Called By:		
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
bool Isdiff(int num)
{
	int i, j;
	int a[LEN];
	for (i = 0; i < LEN; i++)
	{
		a[i] = GetBit(num, i+1);
	}
	
	for (i = 0; i < LEN-1; i++)
	{
		for (j = i+1; j < LEN; j++)
		{
			if (a[i] == a[j])
			{
				return false;
			}
		}
	}	//end  of  for ;
	return true;
}

