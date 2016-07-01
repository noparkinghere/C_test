/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：特殊的完全平方数
 *		要点：简单数学应用，整数趣题
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int GetBit(int num, int bit);
bool IsSquare(int num);
bool IsFun(int num);




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
	
	//在100-999之间查找
	for (i = 100; i < 1000; i++)
	{
		if (IsSquare(i) && IsFun(i))
		{
			printf("%d\t", i);
		}
	}
	printf("\n");
}


/*************************************************
	Function: 		IsSquare
	Description: 	是否是完全平方数
	Calls: 			scanf	printf
	Called By:		
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
bool IsSquare(int num)
{
	if ((int)sqrt(num) * (int)sqrt(num) == num)
		return true;
	else 
		return false;
}

/*************************************************
	Function: 		IsFun
	Description: 	是否满足有两个数字相同
	Calls: 			scanf	printf
	Called By:		
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
bool IsFun(int num)
{
	if ((GetBit(num, 1) != GetBit(num, 2) && GetBit(num, 1) != GetBit(num, 3) \
		&&GetBit(num, 2) != GetBit(num, 3)) || (GetBit(num, 1) == GetBit(num, 2) \
		&& GetBit(num, 1) == GetBit(num, 3)))
	{
		return false;
	}
	return true;
}



/*************************************************
	Function: 		IsFun
	Description: 	是否满足有两个数字相同
	Calls: 			scanf	printf
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

