/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：删除字符串中的连续字符
 *		要点：函数，流程控制
 * 		重点：掌握for的灵活运用，程序思路和算法
 *
 ********************************************************************************/

 
#include <stdio.h>


int stringlen(char *str);
void DelStr(char *str, int pos, int len);
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
	int pos, len;
	printf("input the string:\n");
	InitString(string);
	printf("input the string position:\n");
	scanf("%d", &pos);
	printf("input the string len:\n");
	scanf("%d", &len);		
	DelStr(string, pos, len);
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
void DelStr(char *str, int pos, int len)
{
	int i;
	int length = stringlen(str);
	for (i = pos + len - 1; i < length; i++)
	{
		str[i - len] = str[i];
	}
	str[i - len] = '\0';
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

