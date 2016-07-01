/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：相邻元素之和
 *		要点：函数，流程控制
 * 		重点：掌握for的灵活运用，程序思路和算法
 *
 ********************************************************************************/

 
#include <stdio.h>


void PrintRes(int * f_array, int num);
void InputFiveNum(int *num);



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
	int array[10];
	printf("input the ten number:\n");
	InputFiveNum(array);
	PrintRes(array, 10);
}

/*************************************************
	Function: 		InputFiveNum
	Description: 	输入10个数据
	Calls: 			scanf	
	Called By:		main
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
void InputFiveNum(int *num)
{
	int i;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &num[i]);
	}
}

/*************************************************
	Function: 		PrintRes
	Description: 	打印需要输出的结果
	Calls: 			scanf	
	Called By:		main
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
void PrintRes(int * f_array, int num)
{
	int i;
	for (i = 0; i < num - 1; i++)
	{
		printf("%d\t", f_array[i] + f_array[i + 1]);
	}
}


