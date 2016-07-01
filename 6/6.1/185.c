/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：以行为单位读写文件
 *		要点：文件操作
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
	Description: 	主函数
	Calls: 			scanf	printf
	Called By:		编译器
	Input: 			无
	Output: 		无
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
	while(getchar() != '\n')	//清除出现的换行符号
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
	Description: 	将数据写入文件
	Calls: 			
	Called By:		
	Input: 			无
	Output: 		无
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
	Description: 	将数据写入文件
	Calls: 			
	Called By:		
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
void ReadFile(char *path, char *output)
{
	FILE *fp;
	fp = fopen(path, "r");
	fgets(output, LEN, fp);
	fclose(fp);
}



