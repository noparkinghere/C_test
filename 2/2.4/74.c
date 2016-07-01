/****************************** (C) COPYRIGHT 2016 *******************************
 
 *  	功能：使用指针实现字符串的复制
 *		要点：指针和数组的利用
 * 
 ********************************************************************************/

 
#include <stdio.h>
#include <stdlib.h>


#define MALLOC(type,n)	((type*)malloc(sizeof(type)*n))
#define LEN	100


void InitString(char *str);
void CpyStr(char *p, char *q);


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
	char *p, *q;
	p = MALLOC(char, LEN);
	q = MALLOC(char, LEN);
	printf("input the string:\n");
	InitString(p);
	CpyStr(p, q);
	printf("output the string:\n");
	printf("%s\n", q);
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
	Function: 		CpyStr
	Description: 	字符串拷贝
	Calls: 			
	Called By:		main
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
void CpyStr(char *p, char *q)
{
	int i;
	for (i = 0; p[i] != '\0'; i++)
	{
		q[i] = p[i];
	}
	q[i] = '\0';
}


