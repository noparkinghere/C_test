/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：成块读写操作
 *		要点：文件操作
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
	Description: 	主函数
	Calls: 			scanf	printf
	Called By:		编译器
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
int main(void)
{
	PstruStudent *PStudent = NULL;
	int len;
	char path[20];
	printf("input the numbers:\n");
	scanf("%d", &len);
	PStudent = MALLOC(PstruStudent, len);		//PStudent = MALLOC(PstruStudent, 1);注意不能写成1,1虽然不会报错，指针太过灵活，即便没分配也会认为后续空间合法
	
	//分配内存空间，并且赋值
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
	// strcpy(path, "d:\\test");			//特别注意如果直接考入的话，加转义字符反斜线，否则会认为\t是一个字符
	// printf("%s", path);
	WriteFile(path, PStudent, len);
	ReadFile(path);
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
	Description: 	将数据写入文件
	Calls: 			
	Called By:		
	Input: 			无
	Output: 		无
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
		
		//实现格式化输出操作
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
