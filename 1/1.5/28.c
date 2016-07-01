/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：统计选举票数
 *		要点：函数，流程控制
 * 		重点：掌握for的灵活运用，程序思路和算法
 *
 ********************************************************************************/

 
#include <stdio.h>
#include <stdlib.h>


void RecordVote(int num);


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
	int num;
	printf("input the vote number:\n");

	//参与投票人数
	scanf("%d", &num);
	printf("input the vote:\n");
	RecordVote(num);
}


/*************************************************
	Function: 		RecordVote
	Description: 	动态内存分配方式，记录选票
					且输出结果
	Calls: 			scanf	printf
	Called By:		main
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
void RecordVote(int num)
{
	int *array = (int *)malloc(sizeof(int) * num);
	int i;
	int one = 0;
	int two = 0;
	int three = 0;
	for (i = 0; i < num; i++)
	{
		scanf("%d", &array[i]);
	}
	
	for (i = 0; i < num; i++)
	{
		if (1 == array[i])
		{
			one++;
		}
		else if (2 == array[i])
		{
			two++;
		}
		else if (3 == array[i])
		{
			three++;
		}
	}
	printf("one:\t%d\n", one);
	printf("two:\t%d\n", two);
	printf("three:\t%d\n", three);
	free(array);
	array = NULL;
}


