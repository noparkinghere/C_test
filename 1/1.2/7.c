/****************************** (C) COPYRIGHT 2016 *******************************
 
 *  	功能：判断一个数是否是5的倍数，同时也是7的倍数
 *		要点：讨论判断语句的使用，及通用函数 bool 为c99新增类型
 * 
 ********************************************************************************/

 
#include <stdio.h>

bool JudgeDev(long f_input, int num);	//bool 为c99新增类型


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
	long input;
	printf("input the  number:\n");
	scanf("%ld", &input);
	if (JudgeDev(input, 5) && JudgeDev(input, 7))
	{
		printf("yes\n");
	}	
	else 
		printf("no\n");
}

bool JudgeDev(long f_input, int num)
{
	if (0 == f_input % num)
		return true;
	else
		return false;
}

