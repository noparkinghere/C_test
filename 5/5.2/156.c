/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：自守数
 *		要点：简单数学应用，整数趣题
 *		注意：通用方法虽然可以解决这个问题，但获得数据太长需要用64和32位整型，
 *			且，注意不同类型间的强制转换，否则会溢出。解决本问题最好需要思考算法，
 *			进一步的用数学方法才可以解决这个问题在超过32位时候的运算。
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>



typedef unsigned long int u32;
typedef unsigned long long int u64;



int GetBit(u64 num, int i);
bool IsGui(u32 num);
int GetLen(u32 num);
bool IsGuiTest(void);	//测试程序



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
	//IsGuiTest();
	for (i = 0; i <= 1000000; i++)
	{
		if (IsGui(i))
		{
			printf("%d\t", i);
		}
	}
}


/*************************************************
	Function: 		IsGui
	Description: 	判断是否是自守数
	Calls: 			
	Called By:		
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
bool IsGui(u32 num)
{
	u64 targ = (u64)num * num;
	int len = GetLen(num);
	int i;
	for (i = 1; i <= len; i++)
	{
		if (GetBit(num, i) != GetBit(targ, i))
		{
			return false;
		}
	}
	return true;
}


/*************************************************
	Function: 		GetBit
	Description: 	获得某一位的数
	Calls: 			
	Called By:		
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
int GetBit(u64 num, int i)
{
	while (--i)
	{
		num /= 10;
	}
	return (num % 10);
}


/*************************************************
	Function: 		GetLen
	Description: 	获得数字长度
	Calls: 			
	Called By:		
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
int GetLen(u32 num)
{
	int len;
	for (len = 1; (num /= 10) != 0; len++)
	;
	return len;
}

/*************************************************
	Function: 		IsGui
	Description: 	判断是否是自守数
	Calls: 			
	Called By:		
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
bool IsGuiTest(void)
{
	u32 tmp;
	u64 targ;
	int len;
	int i;
	scanf("%ld", &tmp);
	len = GetLen(tmp);
	targ = (u64)tmp * tmp;
	printf("%d\t%lld\t%d\n", tmp, targ, len);
	
	for (i = 1; i <= len; i++)
	{
		printf("%d,%d\n", GetBit(tmp, i), GetBit(targ, i));
		if (GetBit(tmp, i) != GetBit(targ, i))
		{
			printf("error\n");
		}
	}

}


