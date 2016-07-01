/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：统计各字符个数
 *		要点：函数，流程控制
 * 		重点：掌握for的灵活运用，程序思路和算法
 *
 ********************************************************************************/

 
#include <stdio.h>


int CountOthers(char *input);
int CountChar(char *input);
int CountSpace(char *input);
int CountDigit(char *input);


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
	char input[100];
	int i = 0;
	// char tmp;
	// scanf("%c", &tmp);
	// printf("%d\n", tmp);
	
	int res;
	printf("input the string:\n");
	// scanf("%s", input);				//注意scanf的 %s在遇到空格换行自动认为结束
	
	//手动输入需要的字符串，以换行作为输入结束，且手动加入结束符
	while((input[i++] = getchar()) != '\n');
	input[i - 1] = '\0';
	
	printf("%s\n", input);
	res = CountChar(input);
	printf("char:%d\t", res);
	res = CountSpace(input);
	printf("space:%d\t", res);
	res = CountDigit(input);
	printf("digit:%d\t", res);
	res = CountOthers(input);
	printf("other:%d\t", res);
	printf("\n");
}

/*************************************************
	Function: 		CountChar
	Description: 	统计某字符个数
	Calls: 			
	Called By:		main
	Input: 			无
	Output: 		无
	Return: 		个数
*************************************************/
int CountChar(char *input)
{
	int i = 0;
	int count = 0;
	while (input[i] != '\0')
	{
		if (input[i] >= 'a' && input[i] <= 'z' || input[i] >= 'A' && input[i] <= 'Z')
			count++;
		i++;
	}
	return count;
}

/*************************************************
	Function: 		CountSpace
	Description: 	统计某字符个数
	Calls: 			
	Called By:		main
	Input: 			无
	Output: 		无
	Return: 		个数
*************************************************/
int CountSpace(char *input)
{
	int i = 0;
	int count = 0;
	while (input[i] != '\0')
	{
		if (input[i] == ' ')
			count++;
		i++;
	}
	return count;	
}

/*************************************************
	Function: 		CountDigit
	Description: 	统计某字符个数
	Calls: 			
	Called By:		main
	Input: 			无
	Output: 		无
	Return: 		个数
*************************************************/
int CountDigit(char *input)
{
	int i = 0;
	int count = 0;
	while (input[i] != '\0')
	{
		if (input[i] >= '0' && input[i] <= '9')
			count++;
		i++;
	}
	return count;	
}

/*************************************************
	Function: 		CountOthers
	Description: 	统计某字符个数
	Calls: 			
	Called By:		main
	Input: 			无
	Output: 		无
	Return: 		个数
*************************************************/
int CountOthers(char *input)
{
	int i = 0;
	int count = 0;
	while (input[i] != '\0')
	{
		if (!(input[i] >= '0' && input[i] <= '9' || input[i] != '\0' || input[i] >= 'a' && input[i] <= 'z' || input[i] >= 'A' && input[i] <= 'Z'))
			count++;
		i++;
	}
	return count;	
}


