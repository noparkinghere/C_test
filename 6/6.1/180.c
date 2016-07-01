/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：读取磁盘文件
 *		要点：文件操作
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define NUM 5


#define MALLOC(type,n)	((type*)malloc(sizeof(type)*n))


// double tmp1;

void fun(char *path);

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
	// char *path = NULL;
	// path = MALLOC(char, 50);
	char path[50];
	printf("input the path:\n");
	scanf("%s", path);
	fun(path);
}


/*************************************************
	Function: 		fun
	Description: 	将全部文件内容打印
	Calls: 			
	Called By:		
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
void fun(char *path)
{
	char ch;
	FILE *fp;
	// char *file;
	// file = MALLOC(char, 500);

	fp = fopen(path, "r");
	// fscanf(fp, "%s", file);
	// printf("%s\n", file);
	while (ch != EOF)
	{
		ch = fgetc(fp);
		putchar(ch);
	}
}




