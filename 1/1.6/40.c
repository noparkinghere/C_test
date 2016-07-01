/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ��ַ���������
 *		Ҫ�㣺���������̿���
 * 		�ص㣺����for��������ã�����˼·���㷨
 *
 ********************************************************************************/

 
#include <stdio.h>


int stringlen(char *str);
void DelStr(char *str, int pos, int len);
void InitString(char *str);
void Swap(char *f_iOne, char *f_iTwo);
void SortStr(char *str);
void CatStr(char *str1, char *str2, char *str3);


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
	char string1[100];
	char string2[100];
	char string3[100];	
	int pos, len;
	printf("input the string:\n");
	InitString(string1);
	printf("input the string:\n");
	InitString(string2);	
	
	SortStr(string1);
	SortStr(string2);
	printf("%s\n", string1);
	printf("%s\n", string2);
	
	CatStr(string1, string2, string3);
	printf("%s\n", string3);
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
void CatStr(char *str1, char *str2, char *str3)
{
	int i;
	int len = stringlen(str1);
	for (i = 0; i < stringlen(str1); i++)
	{
		//str1[i + stringlen(str1)]�� stringlen(str1)�ڲ��ϱ仯����������ʹ��
		str3[i] = str1[i];		
	}
	for (i = 0; i < stringlen(str2); i++)
	{
		//str1[i + stringlen(str1)]�� stringlen(str1)�ڲ��ϱ仯����������ʹ��
		str3[i + len] = str2[i];		
	}
	str3[i + len] = '\0';
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


/*************************************************
	Function: 		SortStr
	Description: 	����
	Calls: 			
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
void SortStr(char *str)
{
	int i, j;
	for (i = 0; i < stringlen(str) - 1; i++)
	{
		for (j = i + 1; j < stringlen(str); j++)
			if (str[i] > str[j])
				Swap(&str[i], &str[j]);
	}
		
}


/*************************************************
	Function: 		swap
	Description: 	�����������洢����ֵ
	Calls: 			
	Called By:		
	Input: 			��
	Output: 		��
	Return: 		
*************************************************/
void Swap(char *f_iOne, char *f_iTwo)
{
	char tmp;
	tmp = *f_iOne;
	*f_iOne = *f_iTwo;
	*f_iTwo = tmp;
}


