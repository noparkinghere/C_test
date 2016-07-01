/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：创建临时文件
 *		要点：文件操作,注意linux C不一定有此函数tmpfile
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
// #include <io.h>







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
	FILE *fp;
	char c;
	if ((fp = tmpfile()) == NULL)
	{
		printf("file error!\n");
		exit(1);
	}
	fputs("hello world!\n", fp);
	rewind(fp);
	while ((c = fgetc(fp))!= EOF)
	{
		putchar(c);
	}
}





