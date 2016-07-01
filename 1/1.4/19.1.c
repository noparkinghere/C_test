/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：鸡兔共30只，脚共90只，计算鸡兔各多少只
 *		要点：传统数学计算可以使用二元一次方程如：x+y=30;2x+4y=90分别计算x,y
 * 		计算机可以将数据一个个带入x,y得出满足的数值后输出。注意找到合理带入方法
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
	int x = 0;
	int y = 30 - x;
	while (2 * x + 4 * y != 90)
	{
		x++;
		y = 30 - x;			//注意这句不能少，x，y变量里面存储的都是常量值，y不随着x变化而自动变化。
	}
	printf("the number of chicken is :%d\n", x);
	printf("the number of rabbit is :%d\n", y);
}

