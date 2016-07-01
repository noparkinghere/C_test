/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：求字符串中字符个数
 *		要点：函数，流程控制
 * 		重点：前面案例都已经写好了函数，这边重点掌握函数的利用移植。
 *
 ********************************************************************************/

 
#include <stdio.h>


int stringlen(char *str);
void InitString(char *str);



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
	char string[100];	
	int len;
	printf("input the string:\n");
	InitString(string);
	len = stringlen(string);
	printf("len:%d", len);
}


/*************************************************
	Function: 		stringlen
	Description: 	计算字符串长度
	Calls: 			
	Called By:		main
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
int stringlen(char *str)
{
	int i;
	for (i = 0; str[i] != '\0'; i++);
	return i;
}


/*************************************************
	Function: 		InitString
	Description: 	初始化字符串
	Calls: 			scanf	printf
	Called By:		main
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
void InitString(char *str)
{
	int i = 0;
	while ((str[i++] = getchar()) != '\n');
	str[i - 1] = '\0';
}


