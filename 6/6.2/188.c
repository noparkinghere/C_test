/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：复制文件内容到另一文件
 *		要点：文件操作,ferror feof 等函数的使用
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
	Description: 	主函数
	Calls: 			scanf	printf
	Called By:		编译器
	Input: 			无
	Output: 		无
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
	Description: 	写文件
	Calls: 			
	Called By:		
	Input: 			无
	Output: 		无
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
	while(getchar() != '\n');	//过滤换行符
	
	while ((c = getchar()) != '\n')
	{
		fputc(c, fp);
	}
	
	fclose(fp);
}

/*************************************************
	Function: 		ReadFile
	Description: 	中断显示输出文件内容
	Calls: 			
	Called By:		
	Input: 			无
	Output: 		无
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
	Description: 	合并文件
	Calls: 			
	Called By:		
	Input: 			无
	Output: 		无
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
	
	//方法1：
	// c = fgetc(fp1);		
	// while (!feof(fp1))
	// {
		// fputc(c, fp2);
		// c = fgetc(fp1);		//不直接使用fputc(fgetc(fp1), fp2);是因为执行后会在在文件末尾人为加入一个EOF特殊符号
	// }
	
	//方法2：
	while ((c = fgetc(fp1)) != EOF)
	{
		fputc(c, fp2);	
	}
	
	fclose(fp1);	
	fclose(fp2);	
}




