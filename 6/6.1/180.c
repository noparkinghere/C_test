/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ���ȡ�����ļ�
 *		Ҫ�㣺�ļ�����
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define NUM 5


#define MALLOC(type,n)	((type*)malloc(sizeof(type)*n))


// double tmp1;

void fun(char *path);

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
	// char *path = NULL;
	// path = MALLOC(char, 50);
	char path[50];
	printf("input the path:\n");
	scanf("%s", path);
	fun(path);
}


/*************************************************
	Function: 		fun
	Description: 	��ȫ���ļ����ݴ�ӡ
	Calls: 			
	Called By:		
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
void fun(char *path)
{
	char ch;
	FILE *fp;
	// char *file;
	// file = MALLOC(char, 500);

	fp = fopen(path, "r");
	// fscanf(fp, "%s", file);
	// printf("%s\n", file);
	while (ch != EOF)
	{
		ch = fgetc(fp);
		putchar(ch);
	}
}




