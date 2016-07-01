/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：可逆素数
 *		要点：简单数学应用
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>



bool IsPrime(int num);
int IsVerse(int num);


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
			if (IsPrime(IsVerse(num1)))
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
	for (i = 2; i < num / 2; i++)
	{
		if (num % i == 0)
			return false;
	}
	return true;
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
int IsVerse(int num)
{
	int res = 0;
	while (num != 0)
	{
		res = res * 10 + num % 10;
		num /= 10;
	}
	return res;
}	
