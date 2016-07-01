/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：对调最大最小数
 *		要点：函数，流程控制
 * 		重点：掌握for的灵活运用，程序思路和算法
 *
 ********************************************************************************/

 
#include <stdio.h>



void InputNum(int num, int *f_array);
void OutputNum(int num, int *f_array);
void SwapMaxMin(int num, int *array);
void swap(int *f_iOne, int *f_iTwo);
int * FindMax(int num, int *array);
int * FindMin(int num, int *array);



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
	int array[100];
	int num;
	printf("input the number:\n");
	scanf("%d", &num);
	InputNum(num, array);
	OutputNum(num, array);
	SwapMaxMin(num, array);
	OutputNum(num, array);
}

/*************************************************
	Function: 		InputScore
	Description: 	键盘输入数据
	Calls: 			scanf	printf
	Called By:		mian
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
void InputNum(int num, int *f_array)
{
	int i, j;
	printf("input the value:\n");
	for (i = 0; i < num; i++)
	{
		scanf("%d", &f_array[i]);
	}
}


/*************************************************
	Function: 		OutputScore
	Description: 	输出数据
	Calls: 			scanf	printf
	Called By:		main
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
void OutputNum(int num, int *f_array)
{
	int i, j;
	for (i = 0; i < num; i++)
	{
		printf("%d\t", f_array[i]);
	}
	printf("\n");
}
/*************************************************
	Function: 		SwapMaxMin
	Description: 	交换数组中最大最小值
	Calls: 			
	Called By:		main
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
void SwapMaxMin(int num, int *array)
{
	int * Max;
	int * Min;
	Max = FindMax(num, array);
	Min = FindMin(num, array);
	swap(Max, Min);
}


/*************************************************
	Function: 		swap
	Description: 	交换两变量存储的数值
	Calls: 			
	Called By:		
	Input: 			无
	Output: 		无
	Return: 		
*************************************************/
void swap(int *f_iOne, int *f_iTwo)
{
	int tmp;
	tmp = *f_iOne;
	*f_iOne = *f_iTwo;
	*f_iTwo = tmp;
}


/*************************************************
	Function: 		FindMax
	Description: 	查询数组中的最大值
					并返回最大值的地址
	Calls: 			
	Called By:		
	Input: 			无
	Output: 		无
	Return: 		最大值地址
*************************************************/
int * FindMax(int num, int *array)
{
	int i;
	int *res = array;
	for (i = 0; i < num; i++)
	{
		if (*res < array[i])
			res = array + i;
	}
	return res;
}

/*************************************************
	Function: 		FindMin
	Description: 	查询数组中的最小值
					并返回最小值的地址
	Calls: 			
	Called By:		
	Input: 			无
	Output: 		无
	Return: 		最小值地址
*************************************************/
int * FindMin(int num, int *array)
{
	int i;
	int *res = array;
	for (i = 0; i < num; i++)
	{
		if (*res > array[i])
			res = array + i;
	}
	return res;
}



