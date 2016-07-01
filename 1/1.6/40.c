/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：字符升序排列
 *		要点：函数，流程控制
 * 		重点：掌握for的灵活运用，程序思路和算法
 *
 ********************************************************************************/

 
#include <stdio.h>


int stringlen(char *str);
void DelStr(char *str, int pos, int len);
void InitString(char *str);
void Swap(char *f_iOne, char *f_iTwo);
void SortStr(char *str);
void CatStr(char *str1, char *str2, char *str3);


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
	char string1[100];
	char string2[100];
	char string3[100];	
	int pos, len;
	printf("input the string:\n");
	InitString(string1);
	printf("input the string:\n");
	InitString(string2);	
	
	SortStr(string1);
	SortStr(string2);
	printf("%s\n", string1);
	printf("%s\n", string2);
	
	CatStr(string1, string2, string3);
	printf("%s\n", string3);
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
void CatStr(char *str1, char *str2, char *str3)
{
	int i;
	int len = stringlen(str1);
	for (i = 0; i < stringlen(str1); i++)
	{
		//str1[i + stringlen(str1)]中 stringlen(str1)在不断变化，不能这样使用
		str3[i] = str1[i];		
	}
	for (i = 0; i < stringlen(str2); i++)
	{
		//str1[i + stringlen(str1)]中 stringlen(str1)在不断变化，不能这样使用
		str3[i + len] = str2[i];		
	}
	str3[i + len] = '\0';
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
	Function: 		SortStr
	Description: 	排序
	Calls: 			
	Called By:		main
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
void SortStr(char *str)
{
	int i, j;
	for (i = 0; i < stringlen(str) - 1; i++)
	{
		for (j = i + 1; j < stringlen(str); j++)
			if (str[i] > str[j])
				Swap(&str[i], &str[j]);
	}
		
}


/*************************************************
	Function: 		swap
	Description: 	交换两变量存储的数值
	Calls: 			
	Called By:		
	Input: 			无
	Output: 		无
	Return: 		
*************************************************/
void Swap(char *f_iOne, char *f_iTwo)
{
	char tmp;
	tmp = *f_iOne;
	*f_iOne = *f_iTwo;
	*f_iTwo = tmp;
}


