/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：递归解决年龄问题
 *		要点：函数，流程控制
 * 		重点：递归算法的初步学习
 *
 ********************************************************************************/

 
#include <stdio.h>


int GetAge(int num);


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
	int age;
	int num;
	printf("input the number:\n");
	scanf("%d", &num);
	age = GetAge(num);
	printf("%d", age);
}

int GetAge(int num)
{
	int age;
	if (1 == num)
		return 10;
	else
	{
		age = GetAge(num - 1) + 2;
		return age;
	}
}

