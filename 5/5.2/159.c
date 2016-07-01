/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：一数三平方
 *		要点：简单数学应用，整数趣题
 *		
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>



typedef unsigned long int u32;


int Bit(int num, int bit);
bool IsMatch(u32 num);
bool IsSquare(int num);


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
	u32 i;
	int j;
	for (i = 100000, j = 0; i < 1000000; i++)
	{
		if (IsMatch(i))
		{
			printf("%d\t", i);
			j++;
		}
	}
	printf("\nThe number is : %d\n", j);
}


/*************************************************
	Function: 		IsMatch
	Description: 	匹配数字
	Calls: 			scanf	printf
	Called By:		编译器
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
bool IsMatch(u32 num)
{
	int num1 = Bit(num,1) + 10*Bit(num,2) + 100*Bit(num,3);
	int num2 = Bit(num,4) + 10*Bit(num,5) + 100*Bit(num,6);
	if (IsSquare(num) && IsSquare(num1) && IsSquare(num2))
	{
		return true;
	}
	else
	{
		return false;
	}
}

/*************************************************
	Function: 		Bit
	Description: 	获得位数字
	Calls: 			
	Called By:		
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
int Bit(int num, int bit)
{
	for (; bit > 1; bit--, num/=10)
	;
	return (num % 10);
}

/*************************************************
	Function: 		IsSquare
	Description: 	判断是否是平方数
	Calls: 			
	Called By:		
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
bool IsSquare(int num)
{
	int tmp = (int)sqrt(num);
	return tmp*tmp == num ? true : false;
}
