/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：求车运行速度
 *		要点：矩阵
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MALLOC(type,n)	((type*)malloc(sizeof(type)*n))
#define MAX		120
#define NUM		95859



int GetBit(int num, int bit);
bool IsMirror(int num);
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
	int speed; 

	for (speed = 40; speed <= MAX; speed++)
	{
		if(IsMirror(NUM+speed*2))
		{
			printf("speed is : %d\n", speed);
		}
	}
}


bool IsMirror(int num)
{
	int i;	
	int len = GetLen(num);
	for (i = 1; i <= len/2; i++)
	{
		if (GetBit(num, i) != GetBit(num, len+1-i))
		{
			return false;	
		}
	}
	return true;
}


int GetLen(int num)
{
	int i;
	for (i = 1; (num/=10)!=0; i++)
	;
	return i;
}


int GetBit(int num, int bit)
{
	for (; bit > 1; bit--, num/=10);
	return (num%10);
}

