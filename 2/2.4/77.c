/****************************** (C) COPYRIGHT 2016 *******************************
 
 *  	功能：字符串匹配
 *		要点：
 * 
 ********************************************************************************/

 
#include <stdio.h>
#include <stdlib.h>


#define MALLOC(type,n)	((type*)malloc(sizeof(type)*n))
#define LEN	10



void InitString(char *str);
char *DelStr(char *str);
void OutStr(char *str);
int IsMatchStr(char *p, char *q);
int stringlen(char *str);



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
	int num;
	p = MALLOC(char, LEN);
	q = MALLOC(char, LEN);	
	printf("input the string1:\n");
	InitString(p);
	printf("input the string2:\n");
	InitString(q);
	num = IsMatchStr(p, q);
	if (num == 0)	
		printf("no matched string:\n");	
	else 
		printf("the position is:%d\n", num);
	p = DelStr(p);
	q = DelStr(q);
}

/*************************************************
	Function: 		IsMatchStr
	Description: 	查找匹配字符串
	Calls: 			
	Called By:		main
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
int IsMatchStr(char *p, char *q)
{
	int i, j;
	int flag = 0;
	for (i = 0; p[i] != '\0'; i++)
	{
		if (p[i] == q[0])
		{
			flag = i + 1;
			for (j = 0; q[j] != '\0'; j++)
			{
				if (p[i + j] != q[j])
				{
					flag = 0;
					break;
				}
			}
		}
		if (flag)
			break;
	}
	return flag;
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


