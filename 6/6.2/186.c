/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：复制文件内容到另一文件
 *		要点：文件操作
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


#define LEN		200


void fun(char *src, char *obj);



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
	char src[20];
	char obj[20];
	printf("input source path:\n");
	scanf("%s", src);
	printf("input object path:\n");
	scanf("%s", obj);
	fun(src, obj);
}




/*************************************************
	Function: 		fun
	Description: 	复制文件内容操作
	Calls: 			
	Called By:		
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
void fun(char *src, char *obj)
{
	FILE *fp1;
	FILE *fp2;
	char c;
	fp1 = fopen(src, "r");
	fp2 = fopen(obj, "w");
	
	//这种方式主要是为了不输出EOF，这可能会多加入一个意外字符
	// c = fgetc(fp1);
	// while (c != EOF)
	// {
		// fputc(c, fp2);
		// c = fgetc(fp1);
	// }
	
	//这种方式主要是为了不输出EOF，这可能会多加入一个意外字符
	while ((c = fgetc(fp1)) != EOF)
	{
		fputc(c, fp2);
	}
	
	fclose(fp1);
	fclose(fp2);
}




