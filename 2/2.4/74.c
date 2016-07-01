/****************************** (C) COPYRIGHT 2016 *******************************
 
 *  	���ܣ�ʹ��ָ��ʵ���ַ����ĸ���
 *		Ҫ�㣺ָ������������
 * 
 ********************************************************************************/

 
#include <stdio.h>
#include <stdlib.h>


#define MALLOC(type,n)	((type*)malloc(sizeof(type)*n))
#define LEN	100


void InitString(char *str);
void CpyStr(char *p, char *q);


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
	char *p, *q;
	p = MALLOC(char, LEN);
	q = MALLOC(char, LEN);
	printf("input the string:\n");
	InitString(p);
	CpyStr(p, q);
	printf("output the string:\n");
	printf("%s\n", q);
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
	Function: 		CpyStr
	Description: 	�ַ�������
	Calls: 			
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
void CpyStr(char *p, char *q)
{
	int i;
	for (i = 0; p[i] != '\0'; i++)
	{
		q[i] = p[i];
	}
	q[i] = '\0';
}


