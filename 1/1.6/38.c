/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：连接两个字符串
 *		要点：函数，流程控制
 * 		重点：掌握for的灵活运用，程序思路和算法
 *
 ********************************************************************************/

 
#include <stdio.h>


int stringlen(char *str);
void CatStr(char *str1, char *str2);
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
	char strtmp[100];
	printf("input the string:\n");
	InitString(string);
	printf("input the replaced string:\n");
	InitString(strtmp);
	printf("%s\n", string);
	printf("%s\n", strtmp);
	CatStr(string, strtmp);
	printf("%s\n", string);
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

/*************************************************
	Function: 		CatStr
	Description: 	连接两个字符串
	Calls: 			
	Called By:		main
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
void CatStr(char *str1, char *str2)
{
	int i;
	int len = stringlen(str1);
	for (i = 0; i < stringlen(str2); i++)
	{
		//str1[i + stringlen(str1)]中 stringlen(str1)在不断变化，不能这样使用
		str1[i + len] = str2[i];		
	}
	str1[i + len] = '\0';
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

