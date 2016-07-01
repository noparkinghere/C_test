/****************************** (C) COPYRIGHT 2016 *******************************
 
 *  	功能：计算阶梯的问题，具体参考对应案例
 *		要点：数学计算
 * 
 ********************************************************************************/

 
#include <stdio.h>


bool MatchData(int num);


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
	int num = 0;
	int i;
	
	//输出第一个满足条件的数值
	do
	{
		num++;
	} while (false == MatchData(num));
	printf("the min number is %d\n", num);
	
	//输出0-1000范围内的所有满足条件的数值
	printf("the number list is:\n", num);
	for (i = 0; i < 1000; i++)
	{
		if (true == MatchData(i))
			printf("%d\t", i);
	}
	printf("\n");
}


/*************************************************
	Function: 		MatchData
	Description: 	判定函数
	Calls: 				
	Called By:		main
	Input: 			无
	Output: 		
	Return: 		true	false
*************************************************/
bool MatchData(int num)
{
	if (1 == num % 2 && 2 == num % 3 && 4 == num % 5 \
			&& 5 == num % 6 && 0 == num % 7)
		return true;
	else 
		return false;
}


