/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：查找文件
 *		要点：文件操作,creat
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
	char *ptr = NULL;
	char filename[20];
	printf("input the file name:\n");
	scanf("%s", filename);
	if ((ptr = searchpath(filename)) != NULL)
	{
		printf("%s", ptr);
	}
	else
	{
		printf("no the file!\n");
	}
}





