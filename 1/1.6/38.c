/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ����������ַ���
 *		Ҫ�㣺���������̿���
 * 		�ص㣺����for��������ã�����˼·���㷨
 *
 ********************************************************************************/

 
#include <stdio.h>


int stringlen(char *str);
void CatStr(char *str1, char *str2);
void InitString(char *str);


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
	char string[100];
	char strtmp[100];
	printf("input the string:\n");
	InitString(string);
	printf("input the replaced string:\n");
	InitString(strtmp);
	printf("%s\n", string);
	printf("%s\n", strtmp);
	CatStr(string, strtmp);
	printf("%s\n", string);
}

/*************************************************
	Function: 		InitString
	Description: 	��ʼ���ַ���
	Calls: 			scanf	printf
	Called By:		main
	Input: 			��
	Output: 		��
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
	Description: 	���������ַ���
	Calls: 			
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
void CatStr(char *str1, char *str2)
{
	int i;
	int len = stringlen(str1);
	for (i = 0; i < stringlen(str2); i++)
	{
		//str1[i + stringlen(str1)]�� stringlen(str1)�ڲ��ϱ仯����������ʹ��
		str1[i + len] = str2[i];		
	}
	str1[i + len] = '\0';
}


/*************************************************
	Function: 		stringlen
	Description: 	�����ַ�������
	Calls: 			
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
int stringlen(char *str)
{
	int i;
	for (i = 0; str[i] != '\0'; i++);
	return i;
}

