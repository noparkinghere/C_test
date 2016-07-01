/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ������ļ����ݵ���һ�ļ�
 *		Ҫ�㣺�ļ�����,ferror feof �Ⱥ�����ʹ��
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>




void fun(char *src, char *obj);
void WriteFile(char *path);
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
	char path1[20];
	char path2[20];
	printf("input the first filepath:\n");
	scanf("%s", path1);
	WriteFile(path1);
	printf("input the first filepath:\n");
	scanf("%s", path2);
	WriteFile(path2);
	fun(path1, path2);
	ReadFile(path2);
}

/*************************************************
	Function: 		WriteFile
	Description: 	д�ļ�
	Calls: 			
	Called By:		
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
void WriteFile(char *path)
{
	FILE *fp;
	char c;
	if ((fp = fopen(path, "w")) == NULL)
	{
		perror("file");
	}
	
	printf("input the content:\n");
	while(getchar() != '\n');	//���˻��з�
	
	while ((c = getchar()) != '\n')
	{
		fputc(c, fp);
	}
	
	fclose(fp);
}

/*************************************************
	Function: 		ReadFile
	Description: 	�ж���ʾ����ļ�����
	Calls: 			
	Called By:		
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
void ReadFile(char *path)
{
	FILE *fp;
	if ((fp = fopen(path, "r")) == NULL)
	{
		perror("file");
	}

	while(!feof(fp))
	{
		putchar(fgetc(fp));
	}
	
	fclose(fp);
}

/*************************************************
	Function: 		fun
	Description: 	�ϲ��ļ�
	Calls: 			
	Called By:		
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
void fun(char *src, char *obj)
{
	FILE *fp1 = NULL;
	FILE *fp2 = NULL;
	char c;
	if ((fp1 = fopen(src, "r")) == NULL)
	{
		perror("file");
	}	
	
	if ((fp2 = fopen(obj, "a")) == NULL)
	{
		perror("file");
	}
	
	//����1��
	// c = fgetc(fp1);		
	// while (!feof(fp1))
	// {
		// fputc(c, fp2);
		// c = fgetc(fp1);		//��ֱ��ʹ��fputc(fgetc(fp1), fp2);����Ϊִ�к�������ļ�ĩβ��Ϊ����һ��EOF�������
	// }
	
	//����2��
	while ((c = fgetc(fp1)) != EOF)
	{
		fputc(c, fp2);	
	}
	
	fclose(fp1);	
	fclose(fp2);	
}




