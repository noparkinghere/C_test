/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ����ַ������ַ�����
 *		Ҫ�㣺���������̿���
 * 		�ص㣺ǰ�永�����Ѿ�д���˺���������ص����պ�����������ֲ��
 *
 ********************************************************************************/

 
#include <stdio.h>


int stringlen(char *str);
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
	int len;
	printf("input the string:\n");
	InitString(string);
	len = stringlen(string);
	printf("len:%d", len);
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


