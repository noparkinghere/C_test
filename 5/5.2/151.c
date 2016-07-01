/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：阿姆斯特朗数
 *		要点：简单数学应用，整数趣题
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


bool IsAms(int num);
int Cube(int num);
int GetBit(int num, int bit);




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
	printf("the result is:\n");
	for (i = 100; i < 1000; i++)
	{
		if (IsAms(i))
		{
			printf("%d\t", i);
		}
	}
	printf("\n");
}


/*************************************************
	Function: 		IsAms
	Description: 	判断是否是阿姆斯特朗数
	Calls: 			scanf	printf
	Called By:		
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
bool IsAms(int num)
{
	if (num == Cube(GetBit(num, 1)) + Cube(GetBit(num, 2)) \
		+ Cube(GetBit(num, 3)))
	{
		return true;
	}
	else 
	{
		return false;
	}
}


/*************************************************
	Function: 		Cube
	Description: 	立方值
	Calls: 			
	Called By:		
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
int Cube(int num)
{
	return (num * num * num);
}

/*************************************************
	Function: 		GetBit
	Description: 	获取数据的某位数值
	Calls: 			
	Called By:		
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
int GetBit(int num, int bit)
{
	int i;
	int res;
	for (i = 0; i < bit; i++)
	{
		res = num % 10;
		num /= 10;
	}
	return res;
}
