/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ��ַ����滻
 *		Ҫ�㣺���������̿���
 * 		�ص㣺����for��������ã�����˼·���㷨
 *
 ********************************************************************************/

 
#include <stdio.h>


int stringlen(char *str);
void ModifyStr(int pos, char *str1, char *str2);
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
	int pos;
	char string[100];
	char strtmp[100];
	printf("input the string:\n");
	InitString(string);
	printf("input the replaced string:\n");
	InitString(strtmp);
	printf("input the position:\n");
	scanf("%d", &pos);
	ModifyStr(pos, string, strtmp);
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
	Function: 		ModifyStr
	Description: 	�޸��ַ���
	Calls: 			
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
void ModifyStr(int pos, char *str1, char *str2)
{
	int i;
	for (i = 0; i < stringlen(str2); i++)
	{
		str1[pos - 1 + i] = str2[i];
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

