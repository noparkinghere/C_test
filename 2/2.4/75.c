/****************************** (C) COPYRIGHT 2016 *******************************
 
 *  	功能：寻找第一个相同元素
 *		要点：
 * 
 ********************************************************************************/

 
#include <stdio.h>
#include <stdlib.h>


#define MALLOC(type,n)	((type*)malloc(sizeof(type)*n))
#define LEN	10



void InitString(char *str);
char *JointStr(char *p, char *q);
char *DelStr(char *str);
void OutStr(char *str);



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
	char *p, *q, *str;
	p = MALLOC(char, LEN);
	q = MALLOC(char, LEN);	
	printf("input the string1:\n");
	InitString(p);
	printf("input the string2:\n");
	InitString(q);
	OutStr(p);
	OutStr(q);
	str = JointStr(p, q);
	printf("output the result string:\n");	
	OutStr(str);
	p = DelStr(p);
	q = DelStr(q);
	str = DelStr(str);
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
	Function: 		JointStr
	Description: 	拼接字符串并返回一个新地址
	Calls: 			scanf	printf
	Called By:		main
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
char *JointStr(char *p, char *q)
{
	int i, j;
	char *str = MALLOC(char, LEN);
	for (i = 0; p[i] != '\0'; i++)
	{
		str[i] = p[i];
	}
	for (j = 0; q[i] != '\0'; i++, j++)
	{
		str[i] = q[j];		
	}
	str[i] = '\0';
	return str;
}

/*************************************************
	Function: 		DelStr
	Description: 	清楚堆空间，返回空指针
	Calls: 			
	Called By:		main
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
char *DelStr(char *str)
{
	free(str);
	return NULL;
}

/*************************************************
	Function: 		OutStr
	Description: 	输出字符串
	Calls: 			
	Called By:		main
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
void OutStr(char *str)
{
	printf("the string is :%s\n", str);
}

