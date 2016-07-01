/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：while语句求n的阶乘
 *		要点：掌握while的灵活运用，程序思路和算法
 * 		重点：注意和for循环的差别，可以相互转换，但需要初始化和累加。
 *
 ********************************************************************************/

 
#include <stdio.h>

int Factorial(int f_num);


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
	int res;
	printf("input the number:\n");
	scanf("%d", &num);
	res = Factorial(num);
	printf("%d\n", res);
}

/*************************************************
	Function: 		Factorial
	Description: 	求阶乘的函数
	Calls: 			
	Called By:		main
	Input: 			无
	Output: 		无
	Return: 		阶乘结果
*************************************************/
int Factorial(int f_num)
{
	int i = 1;			//注意初始化
	int res = 1;
	while (i <= f_num)
	{
		res *= i;
		i++;			//注意累加
	}
	return res;
}

