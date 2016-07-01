/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：求1 + 1/2 + 1/3 + ... + 1/n
 *		要点：函数，流程控制
 * 		重点：掌握for的灵活运用，程序思路和算法
 *
 ********************************************************************************/

 
#include <stdio.h>


double SumMuti(int num);


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
	double res;
	printf("input the number:\n");
	scanf("%d", &num);
	
	res = SumMuti(num);
	printf("%.2lf", res);
}

double SumMuti(int num)
{
	double res = 0.0;
	int i;
	for (i = 1; i <= num; i++)
	{
		res += (double)(1.0 / i);
//		printf("%lf\t", res);
	}
	return res;
}


