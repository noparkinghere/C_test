/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ��ɿ��д����
 *		Ҫ�㣺�ļ�����
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>



#define MALLOC(type,n)	((type*)malloc(sizeof(type)*n))


typedef struct
{
	char name[20];
	int number;
	int China;
	int Math;
	int English;
}struStudent, *PstruStudent;


void WriteFile(char *path, PstruStudent *PStudent, int len);
void ReadFile(char *path);


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
	PstruStudent *PStudent = NULL;
	int len;
	char path[20];
	printf("input the numbers:\n");
	scanf("%d", &len);
	PStudent = MALLOC(PstruStudent, len);		//PStudent = MALLOC(PstruStudent, 1);ע�ⲻ��д��1,1��Ȼ���ᱨ��ָ��̫��������û����Ҳ����Ϊ�����ռ�Ϸ�
	
	//�����ڴ�ռ䣬���Ҹ�ֵ
	for (int i = 0; i < len; i++)
	{
		PStudent[i] = MALLOC(struStudent, 1);
		printf("input values:\n");			
		scanf("%s%d%d%d%d", &PStudent[i]->name, &PStudent[i]->number, \
			&PStudent[i]->China, &PStudent[i]->Math,  &PStudent[i]->English);
	}
	
	printf("%p\n", &PStudent);
	printf("%p\n", PStudent);
	printf("%p\n", &PStudent[0]);
	printf("%p\n", &PStudent[1]);
	printf("%p\n", &PStudent[2]);
	printf("%p\n", PStudent[0]);
	
	printf("input the filepath:\n");	
	scanf("%s", path);
	// strcpy(path, "d:\\test");			//�ر�ע�����ֱ�ӿ���Ļ�����ת���ַ���б�ߣ��������Ϊ\t��һ���ַ�
	// printf("%s", path);
	WriteFile(path, PStudent, len);
	ReadFile(path);
}


/*************************************************
	Function: 		WriteFile
	Description: 	������д���ļ�
	Calls: 			
	Called By:		
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
void WriteFile(char *path, PstruStudent *PStudent, int len)
{
	FILE *fp;
	fp = fopen(path, "w");
	
	for (int i = 0; i < len; i++)
	{
		fprintf(fp, "%s\t%d\t%d\t%d\t%d\n", PStudent[i]->name, PStudent[i]->number, \
			PStudent[i]->China, PStudent[i]->Math,  PStudent[i]->English);
		// printf("%s\t%d\t%d\t%d\t%d\n", PStudent[i]->name, PStudent[i]->number, \
			PStudent[i]->China, PStudent[i]->Math,  PStudent[i]->English);
	}
	fclose(fp);
}



/*************************************************
	Function: 		ReadFile
	Description: 	������д���ļ�
	Calls: 			
	Called By:		
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
void ReadFile(char *path)
{
	FILE *fp;
	char ch;
	fp = fopen(path, "r");
	while (ch != EOF)
	{
		ch = fgetc(fp);
		
		//ʵ�ָ�ʽ���������
		switch (ch)
		{
			case '\n' :	printf("\n");
						break;
			case '\t' :	printf("\t");
						break;
			default : 	putchar(ch);
						break;
		}
	}
	fclose(fp);
}
