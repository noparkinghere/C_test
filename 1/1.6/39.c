/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ�ɾ���ַ����е������ַ�
 *		Ҫ�㣺���������̿���
 * 		�ص㣺����for��������ã�����˼·���㷨
 *
 ********************************************************************************/

 
#include <stdio.h>


int stringlen(char *str);
void DelStr(char *str, int pos, int len);
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
	int pos, len;
	printf("input the string:\n");
	InitString(string);
	printf("input the string position:\n");
	scanf("%d", &pos);
	printf("input the string len:\n");
	scanf("%d", &len);		
	DelStr(string, pos, len);
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
void DelStr(char *str, int pos, int len)
{
	int i;
	int length = stringlen(str);
	for (i = pos + len - 1; i < length; i++)
	{
		str[i - len] = str[i];
	}
	str[i - len] = '\0';
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

