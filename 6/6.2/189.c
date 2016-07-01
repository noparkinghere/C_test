/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：统计文件内容
 *		要点：文件操作,ferror feof 等函数的使用
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


typedef struct 
{
	int m_iBlankSpaces;
	int m_iChars;
	int m_iDigits;
	int m_iOthers;
}struCount, *pstruCount;




void WriteFile(char *path, const pstruCount PCount);
void ReadFile(char *path, pstruCount PCount);




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
	struCount Count;
	Count.m_iBlankSpaces = 0;
	Count.m_iChars = 0;
	Count.m_iDigits = 0;
	Count.m_iOthers = 0;
	
	printf("input the path1:\n");
	scanf("%s", path1);
	ReadFile(path1, &Count);
	
	printf("input the path2:\n");
	scanf("%s", path2);
	WriteFile(path2, &Count);
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
void WriteFile(char *path, const pstruCount PCount)
{
	FILE *fp;
	if ((fp = fopen(path, "w")) == NULL)
	{
		perror("file");
		exit(1);
	}
	
	fprintf(fp, "BlankSpace : %d\n", PCount->m_iBlankSpaces);
	fprintf(fp, "Chars : %d\n", PCount->m_iChars);
	fprintf(fp, "Digitals : %d\n", PCount->m_iDigits);
	fprintf(fp, "Others : %d\n", PCount->m_iOthers);
	
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
void ReadFile(char *path, pstruCount PCount)
{
	FILE *fp;
	char c;
	if ((fp = fopen(path, "r")) == NULL)
	{
		perror("file");
		exit(1);
	}
	
	while ((c = fgetc(fp)) != EOF)
	{
		if (c == ' ')
		{
			PCount->m_iBlankSpaces++;
		}
		else if ((c>='A' && c<='Z') || (c>='a' && c<='z'))
		{
			PCount->m_iChars++;
		}
		else if (c>='0' && c<='9')
		{
			PCount->m_iDigits++;
		}
		else
		{
			PCount->m_iOthers++;
		}
	}
	
	fclose(fp);
}





