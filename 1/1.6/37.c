/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ��ж��Ƿ�Ϊ�����ַ���
 *		Ҫ�㣺���������̿���
 * 		�ص㣺����for��������ã�����˼·���㷨
 *
 ********************************************************************************/

 
#include <stdio.h>


int stringlen(char *str);
bool MirrorStr(char *str);
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
	printf("input the string:\n");
	InitString(string);
	if (MirrorStr(string))
		printf("palindrome\n");
	else
		printf("not palindrome\n");
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
	Function: 		MirrorStr
	Description: 	�鿴�Ƿ�Գ�
	Calls: 			
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
bool MirrorStr(char *str)
{
	int i, j;
	for (i = 0, j = stringlen(str) - 1; i < j; i++, j--)
	{
		if (str[i] != str[j])
			return false;
	}
	return true;
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
