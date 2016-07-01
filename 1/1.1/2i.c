/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：实现十进制转换为二进制
 *		要点：主要使用循环语句及函数 
 * 
 *********************************************************************************/

 
#include <stdio.h>


void OutPut(int f_iNum, int f_iBit);


/*************************************************
	Function: 		main
	Description: 	主函数
	Calls: 			scanf	printf	output
	Called By:		编译器
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
int main(void)
{
	int iNum, iBit;
	printf("请输入一个十进制数字,并指定转换为几进制，使用空格隔开：\n");
	printf("please input a decimal number and give the overbit number, using the blankspace to seperate:\n");
	scanf("%d %d", &iNum, &iBit);
	OutPut(iNum, iBit);
	return 0;
}


/*************************************************
	Function: 		Output
	Description: 	将10进制转换为任意进制输出
	Calls: 			printf
	Called By:		main
	Input: 			iNum	输入的数值
					iBit	需转换的进制
	Output: 		无
	Return: 		0
*************************************************/
void OutPut(int f_iNum, int f_iBit)
{
	int a[100];
	int iCount = 0;
	int i;
	
	for (i = 0; f_iNum > 0; i++)
	{
		a[i] = f_iNum % f_iBit;
		f_iNum /= f_iBit;
		iCount++;
	}
	
	for (i = iCount; i > 0; i--)
	{
		printf("%d", a[i - 1]);
	}
	
	printf("\n");
}
