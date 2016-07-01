/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：三重回文数
 *		要点：简单数学应用，整数趣题
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int GetBit(int num, int bit);
bool IsTriMos(int num);
bool IsMos(int num);
int LenNum(int num);





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
	for (i = 10; i <= 10000; i++)
	{
		if (IsTriMos(i))
		{
			printf("%d\t%d\t%d\n", i, i*i, i*i*i);
		}
	}
}


/*************************************************
	Function: 		IsTriMos
	Description: 	判断是否是三重回文数
	Calls: 			
	Called By:		
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
bool IsTriMos(int num)
{
	if (IsMos(num) && IsMos(num * num) & IsMos(num*num*num))
	{
		return true;
	}
	else
	{
		return false;
	}
}

/*************************************************
	Function: 		IsMos
	Description: 	判断是否是回文数
	Calls: 			
	Called By:		
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
bool IsMos(int num)
{
	int i;
	int len = LenNum(num);
	for (i = 1; i <= len; i++)
	{
		if (GetBit(num, i) != GetBit(num, len + 1 - i))
		{
			return false;
		}
	}
	return true;
}

/*************************************************
	Function: 		LenNum
	Description: 	数字长度
	Calls: 			
	Called By:		
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
int LenNum(int num)
{
	int i;
	for (i = 1; (num /= 10) != 0; i++)
	;
	return i;
}


/*************************************************
	Function: 		GetBit
	Description: 	取第bit位的值
	Calls: 			
	Called By:		
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
int GetBit(int num, int bit)
{
	int i;
	for (i = 0; i < bit - 1; i++)
	{
		num /= 10;
	}
	return (num % 10);	//返回末尾值
}


