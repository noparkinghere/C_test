/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ���ʽ����д�ļ�
 *		Ҫ�㣺�ļ�����
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define NUM 5


#define MALLOC(type,n)	((type*)malloc(sizeof(type)*n))


// double tmp1;
void WriteFile(FILE **fp);
void ReadFile(FILE *fp);

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
	FILE *fp;
	(2>1) ? printf("2>1\n") : printf("2<1\n");

	WriteFile(&fp);
	ReadFile(fp);
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
void WriteFile(FILE **fp)
{
	char path[20];
	char input[100];
	printf("input the filename:\n");
	scanf("%s", path);
	*fp = fopen(path, "w");
	printf("input the string:\n");
	
	while(getchar() != '\n')	//�˳����з�
	;
	
	scanf("%s", input);
	fprintf(*fp, "%s", input);
	fclose(*fp);
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
void ReadFile(FILE *fp)
{
	char output[100];
	char path[20];
	
	printf("input the filename:\n");
	scanf("%s", path);
	fp = fopen(path, "r");
	fscanf(fp, "%s", output);
	printf("%s\n", output);

	for (int i = 0; ; i++)
	{
		(output[i] == '\0') ? (break) : (output[i] += 'A'-'a');
		if (output[i] == '\0')
		{
			break;
		}
		else 
		{
			output[i] += 'A'-'a';
		}
	}
	printf("%s\n", output);
}
