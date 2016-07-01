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


void WriteFile(char *path, PstruStudent *PStudent, int num);
void ReadFile(char *path);
PstruStudent *ArrMalloc(int num);


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
	char path[20];
	char num;
	PstruStudent *PStudent = NULL;
	
	printf("input the numbers of the students :\n");
	scanf("%d", &num);
	PStudent = ArrMalloc(num);
	printf("input the path:\n");
	scanf("%s", path);
	WriteFile(path, PStudent, num);
	ReadFile(path);	
}


/*************************************************
	Function: 		ArrMalloc
	Description: 	��̬�����ڴ�ռ�
	Calls: 			
	Called By:		
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
PstruStudent *ArrMalloc(int num)
{
	PstruStudent *PStudent = MALLOC(PstruStudent, num);		//numΪPStudent[i]��i����󳤶ȣ��洢����PstruStudent��������
	for (int i = 0; i < num; i++)
	{
		PStudent[i] = MALLOC(struStudent, 1);
	}
	
	return PStudent;
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
void WriteFile(char *path, PstruStudent *PStudent, int num)
{
	FILE *fp = NULL;
	fp = fopen(path, "w");
	
	//�ն��������ݣ����Ҵ�ӡ���ļ���
	for (int i = 0; i < num; i++)
	{
		printf("input the values:\n");
		scanf("%s%d%d%d%d", &PStudent[i]->name, &PStudent[i]->number, &PStudent[i]->China,\
			&PStudent[i]->Math, &PStudent[i]->English);
		//��ӡ���ļ�
		fprintf(fp, "%s\t%d\t%d\t%d\t%d\n", PStudent[i]->name, PStudent[i]->number, PStudent[i]->China,\
			PStudent[i]->Math, PStudent[i]->English);
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
	char output;
	fp = fopen(path, "r");
	
	// while (output != EOF)
	// {
		// output = fgetc(fp);
		// putchar(output);		
	// }
	
	while (output != EOF)
	{
		output = fgetc(fp);
		
		//����ָ������
		if (output == '\n')
		{
			while((output=fgetc(fp))!='\n' && output!=EOF)
			;
		}
		
		putchar(output);
	}
	fclose(fp);
}


