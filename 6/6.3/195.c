/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：删除文件中的记录
 *		要点：文件操作,注意main的参数使用
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>
// #include <io.h>



typedef struct
{
	char name[20];
	int salary;
}struMem;



void WriteFile(char *path);
void ModFile(char *path);
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
int main(int argc, char **argv)
{
	char path[20];
	printf("input the path:\n");
	scanf("%s", path);
	WriteFile(path);
	ReadFile(path);		//先检查是否正确
	ModFile(path);
	ReadFile(path);
}


void WriteFile(char *path)
{
	FILE *fp = NULL;
	struMem Mem[3];

	if ((fp = fopen(path, "w")) == NULL)
	{
		printf("file error!");
		exit(1);
	}
	
	for (int i = 0; i < 3; i++)
	{
		printf("input the name:\n");
		scanf("%s", Mem[i].name);
		fprintf(fp, "%s\t", Mem[i].name);
		printf("input the salary:\n");
		scanf("%d", &Mem[i].salary);
		fprintf(fp, "%d\n", Mem[i].salary);
	}
	fclose(fp);
}



void ModFile(char *path)
{
	FILE *fp = NULL;
	FILE *temp = NULL;
	char name[20];
	char chs[20];
	char c;
	int i;
	
	if ((fp = fopen(path, "r")) == NULL)
	{
		printf("file error!");
		exit(1);
	}
	
	if ((temp = tmpfile()) == NULL)
	{
		printf("file error!");
		exit(1);
	}	
	
	printf("input the del data:");
	scanf("%s", name);
	
	//删选数据存入到temp临时文件中
	while (!feof(fp))
	{
		// fgets(chs, sizeof(chs), fp);
		// printf("%s\n", chs);
		for (i = 0; (c = fgetc(fp)) != '\t' && !feof(fp); i++)
		{
			chs[i] = c; 
		}
		chs[i] = '\0';
		// printf("%s", chs);
		
		if (strcmp(chs, name) != 0 && !feof(fp))
		{
			fprintf(temp, "%s\t", chs);
			while ((c = fgetc(fp)) != '\n')
			{
				fputc(c, temp);
			}
			fputc('\n', temp);
			// printf("error1");
		}
		else
		{
			while ((c = fgetc(fp)) != '\n' && !feof(fp))
			;
			// printf("error2");
		}
	}
	// printf("error");
	rewind(temp);	//注意重新指向文件起始位置
	// while ((c = fgetc(temp))!= EOF)
	// {
		// putchar(c);
	// }	
	
	fclose(fp);
	
	if ((fp = fopen(path, "w")) == NULL)
	{
		printf("file error!");
		exit(1);
	}
	
	while ((c = fgetc(temp)) != EOF)
	{
		fputc(c, fp);
	}
	fclose(fp);

	// printf("error");
}

void ReadFile(char *path)
{
	FILE *fp = NULL;
	char c;
	
	if ((fp = fopen(path, "r")) == NULL)
	{
		printf("file error!");
		exit(1);
	}
	
	while ((c = fgetc(fp)) != EOF)
	{
		putchar(c);
	}
	fclose(fp);
}


