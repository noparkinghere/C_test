/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：逆序存放数据
 *		要点：函数，流程控制
 * 		重点：掌握for的灵活运用，程序思路和算法
 *
 ********************************************************************************/

 
#include <stdio.h>


void InputFiveNum(int *num);
void OutputFiveNum(int *num);
void ReverseNum(int *f_array, int f_num);
void Swap(int *a, int *b);


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
	int num[5];
	printf("input the five number:\n");
	InputFiveNum(num);
	ReverseNum(num, 5);
	OutputFiveNum(num);
}

/*************************************************
	Function: 		InputFiveNum
	Description: 	输入五个数据
	Calls: 			scanf	
	Called By:		main
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
void InputFiveNum(int *num)
{
	int i;
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &num[i]);
	}
	
	printf("the original number is:\n");
	for (i = 0; i < 5; i++)
	{
		printf("%d\t", num[i]);
	}
	printf("\n");
}

/*************************************************
	Function: 		ReverseNum
	Description: 	转置数据
	Calls: 			scanf	
	Called By:		main
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
void ReverseNum(int *f_array, int f_num)
{
	int i;
	int tmp;
	
	//置换注意除半
	for (i = 0; i < f_num / 2; i++)
	{
		Swap(f_array + i, f_array + f_num - 1 - i);//注意置换数值的位置
	}
}

/*************************************************
	Function: 		OutputFiveNum
	Description: 	输出结果数据
	Calls: 			printf	
	Called By:		main
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
void OutputFiveNum(int *num)
{
	int i;
	printf("the result is:\n");
	for (i = 0; i < 5; i++)
	{
		printf("%d\t", num[i]);
	}
}


/*************************************************
	Function: 		Swap
	Description: 	交换两个数据
	Calls: 			
	Called By:		SortThree
	Input: 			无
	Output: 		无
	Return: 		
*************************************************/
void Swap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

