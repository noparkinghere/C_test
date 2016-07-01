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


void WriteFile(char *path, PstruStudent *PStudent, int num);
void ReadFile(char *path);
PstruStudent *ArrMalloc(int num);


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
	Description: 	动态分配内存空间
	Calls: 			
	Called By:		
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
PstruStudent *ArrMalloc(int num)
{
	PstruStudent *PStudent = MALLOC(PstruStudent, num);		//num为PStudent[i]的i的最大长度，存储的是PstruStudent类型数据
	for (int i = 0; i < num; i++)
	{
		PStudent[i] = MALLOC(struStudent, 1);
	}
	
	return PStudent;
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
void WriteFile(char *path, PstruStudent *PStudent, int num)
{
	FILE *fp = NULL;
	fp = fopen(path, "w");
	
	//终端输入数据，并且打印到文件中
	for (int i = 0; i < num; i++)
	{
		printf("input the values:\n");
		scanf("%s%d%d%d%d", &PStudent[i]->name, &PStudent[i]->number, &PStudent[i]->China,\
			&PStudent[i]->Math, &PStudent[i]->English);
		//打印到文件
		fprintf(fp, "%s\t%d\t%d\t%d\t%d\n", PStudent[i]->name, PStudent[i]->number, PStudent[i]->China,\
			PStudent[i]->Math, PStudent[i]->English);
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
		
		//跳过指定的行
		if (output == '\n')
		{
			while((output=fgetc(fp))!='\n' && output!=EOF)
			;
		}
		
		putchar(output);
	}
	fclose(fp);
}


