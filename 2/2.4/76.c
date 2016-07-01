/****************************** (C) COPYRIGHT 2016 *******************************
 
 *  	���ܣ��ַ�������
 *		Ҫ�㣺
 * 
 ********************************************************************************/

 
#include <stdio.h>
#include <stdlib.h>


#define MALLOC(type,n)	((type*)malloc(sizeof(type)*n))
#define LEN	10



void InitString(char *str);
char *DelStr(char *str);
void OutStr(char *str);
void InsertStr(char *p, char *q, int num);
int stringlen(char *str);



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
	int num;
	p = MALLOC(char, LEN);
	q = MALLOC(char, LEN);	
	printf("input the string1:\n");
	InitString(p);
	printf("input the string2:\n");
	InitString(q);
	printf("input the insert position:\n");
	scanf("%d", &num);
	OutStr(p);
	OutStr(q);
	InsertStr(p, q, num);
	printf("output the result string:\n");	
	OutStr(p);
	p = DelStr(p);
	q = DelStr(q);
}

/*************************************************
	Function: 		InsertStr
	Description: 	�ַ�������
	Calls: 			
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
void InsertStr(char *p, char *q, int num)
{
	int i;
	int len1 = stringlen(p);
	int len2 = stringlen(q);
	for (i = len1; i >= num - 1; i--)
	{
		p[i + len2] = p[i];
	}
	for (i = 0; i < len2; i++)
	{
		p[i + num - 1] = q[i];
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
	Function: 		DelStr
	Description: 	����ѿռ䣬���ؿ�ָ��
	Calls: 			
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
char *DelStr(char *str)
{
	free(str);
	return NULL;
}

/*************************************************
	Function: 		OutStr
	Description: 	����ַ���
	Calls: 			
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
void OutStr(char *str)
{
	printf("the string is :%s\n", str);
}


