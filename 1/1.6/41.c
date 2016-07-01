/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ�ָ��λ�ú�����ַ�
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
void InsertStr(char *str1, char *str2, int pos);


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
	int pos;
	printf("input the string:\n");
	InitString(string1);
	printf("input the string:\n");
	InitString(string2);	
	printf("input the insert position:\n");
	scanf("%d", &pos);
	InsertStr(string1, string2, pos);
	printf("%s\n", string1);
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
	Function: 		InsertStr
	Description: 	�����ַ���
	Calls: 			
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
void InsertStr(char *str1, char *str2, int pos)
{
	int i;
	int len1 = stringlen(str1);
	int len2 = stringlen(str2);
	for (i = len1 - 1;  i >= pos - 1; i--)
	{
		str1[i + len2] = str1[i];
	}
	str1[len1 + len2] = '\0';
	
	for (i = 0; i < len2; i++)
	{
		str1[i + pos - 1] = str2[i];
	}
	
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


