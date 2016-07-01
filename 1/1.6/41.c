/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：指定位置后插入字符
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
void InsertStr(char *str1, char *str2, int pos);


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
	int pos;
	printf("input the string:\n");
	InitString(string1);
	printf("input the string:\n");
	InitString(string2);	
	printf("input the insert position:\n");
	scanf("%d", &pos);
	InsertStr(string1, string2, pos);
	printf("%s\n", string1);
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
	Function: 		InsertStr
	Description: 	插入字符串
	Calls: 			
	Called By:		main
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
void InsertStr(char *str1, char *str2, int pos)
{
	int i;
	int len1 = stringlen(str1);
	int len2 = stringlen(str2);
	for (i = len1 - 1;  i >= pos - 1; i--)
	{
		str1[i + len2] = str1[i];
	}
	str1[len1 + len2] = '\0';
	
	for (i = 0; i < len2; i++)
	{
		str1[i + pos - 1] = str2[i];
	}
	
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


