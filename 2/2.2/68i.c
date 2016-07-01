/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：将若干字符串按照字母表顺序输出, 这边有所扩同题80
 *		要点：a[]存放字符指针变量，
 * 		重点：能用a[]数组形式表示，都用a[]，一般数组表示法要比指针表示的更加清晰！
 * 
 ********************************************************************************/

 
#include <stdio.h>
#include <stdlib.h>


#define MALLOC(n,type)	((type*)malloc(sizeof(type)*n))
#define LEN 100


void SortStrings(int num, char **str);
char **InitStrings(int num);
bool CmpStr(char *str1, char *str2);
void SwapStr(char **str1, char **str2);
void OutStrings(int num, char **str);
char ** DelStrings(int num, char **str);


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
	char **strings;
	int num;
	printf("input the strings number:\n");
	scanf("%d", &num);
	while (getchar() != '\n');	//输入前将buff清空，注意放入位置
	printf("input the strings:\n");	
	strings = InitStrings(num);
	printf("the original strings:\n");	
	OutStrings(num, strings);
	SortStrings(num, strings);
	printf("the final strings:\n");	
	OutStrings(num, strings);
	strings = DelStrings(num, strings);
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
char **InitStrings(int num)
{
	char **str;
	int i;
	int j = 0;
	str = MALLOC(num, char *);
	for (i = 0; i < num; i++)
	{
		str[i] = MALLOC(LEN, char);
		//scanf("%s", str[i]);
		while ((str[i][j++] = getchar()) != '\n');
		str[i][j - 1] = '\0';
		j = 0;
	}
	//while (getchar() == '\n');
	return str;
}

/*************************************************
	Function: 		SortStrings
	Description: 	字符串排序
	Calls: 			
	Called By:		main
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
void SortStrings(int num, char **str)
{
	int i, j;
	for (i = 0; i < num - 1; i++)
	{
		for (j = i + 1; j < num; j++)
		{
			if (CmpStr(str[i], str[j]))
				SwapStr(&str[i], &str[j]);
		}
	}
}

/*************************************************
	Function: 		CmpStr
	Description: 	比较字符串
	Calls: 			
	Called By:		main
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
bool CmpStr(char *str1, char *str2)
{
	int i;
	for (i = 0; i < LEN; i++)
	{
		if (str1[i] > str2[i])
		{
			// printf("true\n");
			return true;

		}
		if (str1[i] < str2[i] || str1[i] == '\0' || str2[i] == '\0')
		{
			// printf("false\n");
			return false;
		}
	}
	printf("error!\n");
	exit(-1);
}

/*************************************************
	Function: 		SwapStr
	Description: 	交换值
	Calls: 			
	Called By:		main
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
void SwapStr(char **str1, char **str2)
{
	char *tmp;
	tmp = *str1;//注意指针交换的是*str而不是str且无法改变str地址
	*str1 = *str2;
	*str2 = tmp;
}

/*************************************************
	Function: 		OutStrings
	Description: 	输出
	Calls: 			scanf	printf
	Called By:		编译器
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
void OutStrings(int num, char **str)
{
	int i;
	for (i = 0; i < num; i++)
	{
		printf("%s\n", str[i]);
	}	
}

/*************************************************
	Function: 		DelStrings
	Description: 	删除字符串栈
	Calls: 			scanf	printf
	Called By:		编译器
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
char ** DelStrings(int num, char **str)
{
	int i;
	for (i = 0; i < num; i++)
	{
		free(str[i]);
	}	
	free(str);
	return NULL;
}

