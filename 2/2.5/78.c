/****************************** (C) COPYRIGHT 2016 *******************************
 
 *  	���ܣ��ַ���ƥ��
 *		Ҫ�㣺
 * 
 ********************************************************************************/

 
#include <stdio.h>
#include <stdlib.h>


#define MALLOC(type,n)	((type*)malloc(sizeof(type)*n))
#define LEN	100


char ** InitStr(int num);
void OutStr(int num, char **str);



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
	char **strings;
	int num;
	printf("input the number of strings:\n");	
	scanf(" %d", &num);
	while(getchar() != '\n');
	printf("input the strings:\n");	
	strings = InitStr(num);
	printf("output the strings:\n");	
	OutStr(num, strings);
}


/*************************************************
	Function: 		InitStr
	Description: 	��ʼ���ַ�������
	Calls: 			
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
char ** InitStr(int num)
{
	char **str;
	int i, j = 0;
	str = MALLOC(char *, num);
	for (i = 0; i < num; i++)
	{
		j = 0;
		str[i] = MALLOC(char, LEN);
		while ((str[i][j++] = getchar()) != '\n');
		str[i][j - 1] = '\0';
	}
	return str;
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
void OutStr(int num, char **str)
{
	int i;
	for (i = 0; i < num; i++)
	{
		printf("%s\n", str[i]);
	}
}

