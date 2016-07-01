/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：判断是否为回文字符串
 *		要点：函数，流程控制
 * 		重点：掌握for的灵活运用，程序思路和算法
 *
 ********************************************************************************/

 
#include <stdio.h>


int stringlen(char *str);
bool MirrorStr(char *str);
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
	int pos;
	char string[100];
	printf("input the string:\n");
	InitString(string);
	if (MirrorStr(string))
		printf("palindrome\n");
	else
		printf("not palindrome\n");
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
	Function: 		MirrorStr
	Description: 	查看是否对称
	Calls: 			
	Called By:		main
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
bool MirrorStr(char *str)
{
	int i, j;
	for (i = 0, j = stringlen(str) - 1; i < j; i++, j--)
	{
		if (str[i] != str[j])
			return false;
	}
	return true;
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
