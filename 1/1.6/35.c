/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ��ַ�������
 *		Ҫ�㣺���������̿���
 * 		�ص㣺����for��������ã�����˼·���㷨
 *
 ********************************************************************************/

 
#include <stdio.h>

void OutputString(char *input);
void ReverseString(char *input, char *output);
int StringLen(char *input);


/*************************************************
	Function: 		main
	Description: 	������
	Calls: 			scanf	printf
	Called By:		������
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
int main(void)
{
	char input[100];
	char output[100];
	int i = 0;
	printf("input the string:\n");
	
	//�ֶ�������Ҫ���ַ������Ի�����Ϊ������������ֶ����������
	while((input[i++] = getchar()) != '\n');
	input[i - 1] = '\0';
	
	OutputString(input);
	ReverseString(input, output);
	OutputString(output);
}

/*************************************************
	Function: 		OutputString
	Description: 	����ַ���
	Calls: 			scanf	printf
	Called By:		main
	Input: 			��
	Output: 		��
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


