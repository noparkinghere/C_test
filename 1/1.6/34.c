/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ�ͳ�Ƹ��ַ�����
 *		Ҫ�㣺���������̿���
 * 		�ص㣺����for��������ã�����˼·���㷨
 *
 ********************************************************************************/

 
#include <stdio.h>


int CountOthers(char *input);
int CountChar(char *input);
int CountSpace(char *input);
int CountDigit(char *input);


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
	int i = 0;
	// char tmp;
	// scanf("%c", &tmp);
	// printf("%d\n", tmp);
	
	int res;
	printf("input the string:\n");
	// scanf("%s", input);				//ע��scanf�� %s�������ո����Զ���Ϊ����
	
	//�ֶ�������Ҫ���ַ������Ի�����Ϊ������������ֶ����������
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
	Description: 	ͳ��ĳ�ַ�����
	Calls: 			
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		����
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
	Description: 	ͳ��ĳ�ַ�����
	Calls: 			
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		����
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
	Description: 	ͳ��ĳ�ַ�����
	Calls: 			
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		����
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
	Description: 	ͳ��ĳ�ַ�����
	Calls: 			
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		����
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


