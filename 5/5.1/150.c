/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：可逆素数
 *		要点：简单数学应用
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


bool IsPrime(int num);
bool IsRev(int num);
int GetBit(int num, int bit);
int GetLen(int num);



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
	int num1;
	int num2;
	printf("num1:");
	scanf("%d", &num1);
	printf("num1:");
	scanf("%d", &num2);
	
	for (; num1 <= num2; num1++)
	{
		if (IsPrime(num1))
		{
			if (IsRev(num1))
			{
				printf("%d\t", num1);			
			}
		}
	}	//end of for 

}


/*************************************************
	Function: 		IsPrime
	Description: 	判断是否是素数
	Calls: 			scanf	printf
	Called By:		编译器
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
bool IsPrime(int num)
{
	int i;
	int tmp = (int)sqrt(num);
	
	//开根更加合理减少操作步骤
	for (i = 2; i <= tmp; i++)		//数学计算尤其注意i起始值和<=/<
	{
		if (num % i == 0)
			return false;
	}
	return true;
}	


/*************************************************
	Function: 		IsRev
	Description: 	判断是否是回文数
	Calls: 			scanf	printf
	Called By:		编译器
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
bool IsRev(int num)
{
	int i;
	int len = GetLen(num);
	for (i = 1; i <= len / 2; i++)
	{
		if (GetBit(num, i) != GetBit(num, len+1-i))
		{
			return false;
		}
	}
	return true;
}	


/*************************************************
	Function: 		GetLen
	Description: 	获取数字位数长度
	Calls: 			
	Called By:		
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
int GetLen(int num)
{
	int i;
	for (i = 0; (num /= 10) != 0; i++)
	;
	return i + 1;
}


/*************************************************
	Function: 		GetBit
	Description: 	获取数字某位的值
	Calls:
	Called By:		
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
int GetBit(int num, int bit)
{
	int i;
	int res = 0;
	for (i = 0; i < bit; i++)
	{
		res = num % 10;
		num /= 10;
	}
	return res;
}

