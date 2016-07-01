/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ��������ַ���������ĸ��˳�����, ���������ͬ��80
 *		Ҫ�㣺a[]����ַ�ָ�������
 * 		�ص㣺����a[]������ʽ��ʾ������a[]��һ�������ʾ��Ҫ��ָ���ʾ�ĸ���������
 * 
 ********************************************************************************/

 
#include <stdio.h>
#include <stdlib.h>


#define MALLOC(n,type)	((type*)malloc(sizeof(type)*n))
#define LEN 100


void SortStrings(int num, char **str);
char **InitStrings(int num);
bool CmpStr(char *str1, char *str2);
void SwapStr(char **str1, char **str2);
void OutStrings(int num, char **str);
char ** DelStrings(int num, char **str);


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
	printf("input the strings number:\n");
	scanf("%d", &num);
	while (getchar() != '\n');	//����ǰ��buff��գ�ע�����λ��
	printf("input the strings:\n");	
	strings = InitStrings(num);
	printf("the original strings:\n");	
	OutStrings(num, strings);
	SortStrings(num, strings);
	printf("the final strings:\n");	
	OutStrings(num, strings);
	strings = DelStrings(num, strings);
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
char **InitStrings(int num)
{
	char **str;
	int i;
	int j = 0;
	str = MALLOC(num, char *);
	for (i = 0; i < num; i++)
	{
		str[i] = MALLOC(LEN, char);
		//scanf("%s", str[i]);
		while ((str[i][j++] = getchar()) != '\n');
		str[i][j - 1] = '\0';
		j = 0;
	}
	//while (getchar() == '\n');
	return str;
}

/*************************************************
	Function: 		SortStrings
	Description: 	�ַ�������
	Calls: 			
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
void SortStrings(int num, char **str)
{
	int i, j;
	for (i = 0; i < num - 1; i++)
	{
		for (j = i + 1; j < num; j++)
		{
			if (CmpStr(str[i], str[j]))
				SwapStr(&str[i], &str[j]);
		}
	}
}

/*************************************************
	Function: 		CmpStr
	Description: 	�Ƚ��ַ���
	Calls: 			
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
bool CmpStr(char *str1, char *str2)
{
	int i;
	for (i = 0; i < LEN; i++)
	{
		if (str1[i] > str2[i])
		{
			// printf("true\n");
			return true;

		}
		if (str1[i] < str2[i] || str1[i] == '\0' || str2[i] == '\0')
		{
			// printf("false\n");
			return false;
		}
	}
	printf("error!\n");
	exit(-1);
}

/*************************************************
	Function: 		SwapStr
	Description: 	����ֵ
	Calls: 			
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
void SwapStr(char **str1, char **str2)
{
	char *tmp;
	tmp = *str1;//ע��ָ�뽻������*str������str���޷��ı�str��ַ
	*str1 = *str2;
	*str2 = tmp;
}

/*************************************************
	Function: 		OutStrings
	Description: 	���
	Calls: 			scanf	printf
	Called By:		������
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
void OutStrings(int num, char **str)
{
	int i;
	for (i = 0; i < num; i++)
	{
		printf("%s\n", str[i]);
	}	
}

/*************************************************
	Function: 		DelStrings
	Description: 	ɾ���ַ���ջ
	Calls: 			scanf	printf
	Called By:		������
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
char ** DelStrings(int num, char **str)
{
	int i;
	for (i = 0; i < num; i++)
	{
		free(str[i]);
	}	
	free(str);
	return NULL;
}

