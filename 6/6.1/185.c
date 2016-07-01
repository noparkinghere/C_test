/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ�����Ϊ��λ��д�ļ�
 *		Ҫ�㣺�ļ�����
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


#define LEN		200


void ReadFile(char *path, char *output);
void WriteFile(char *path, char *input);



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
	char input[LEN];
	char output[LEN];
	char path[20];
	int i;
	
	printf("input the filepath:\n");
	scanf("%s", path);
	
	printf("input the string:\n");	
	while(getchar() != '\n')	//������ֵĻ��з���
	;
	
	for (i = 0; (input[i] = getchar()) != '\n'; i++)
	;
	input[i] = '\0';
	
	WriteFile(path, input);
	ReadFile(path, output);
	
	printf("%s", output);
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
void WriteFile(char *path, char *input)
{
	FILE *fp = NULL;
	fp = fopen(path, "w");
	fputs(input, fp);
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
void ReadFile(char *path, char *output)
{
	FILE *fp;
	fp = fopen(path, "r");
	fgets(output, LEN, fp);
	fclose(fp);
}



