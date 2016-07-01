/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：字符串倒置
 *		要点：函数，流程控制
 * 		重点：掌握for的灵活运用，程序思路和算法
 *
 ********************************************************************************/

 
#include <stdio.h>

void OutputString(char *input);
void ReverseString(char *input, char *output);
int StringLen(char *input);


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
	char output[100];
	int i = 0;
	printf("input the string:\n");
	
	//手动输入需要的字符串，以换行作为输入结束，且手动加入结束符
	while((input[i++] = getchar()) != '\n');
	input[i - 1] = '\0';
	
	OutputString(input);
	ReverseString(input, output);
	OutputString(output);
}

/*************************************************
	Function: 		OutputString
	Description: 	输出字符串
	Calls: 			scanf	printf
	Called By:		main
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
void OutputString(char *input)
{
	printf("%s\n", input);
}

void ReverseString(char *input, char *output)
{
	int i;
	int len = StringLen(input);
	for (i = 0; i < len; i++)
	{
		output[i] = input[len - i - 1];
	}
	output[i] = '\0';
}

int StringLen(char *input)
{
	int i;
	for (i = 0; input[i] != '\0'; i++);
	return i;
}


