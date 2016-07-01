/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：重命名文件
 *		要点：文件操作,注意main的参数使用
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
int main(int argc, char **argv)
{
	FILE *fp = NULL;
	if (argc < 3)
	{
		printf("need more arg!\n");
		exit(0);
	}
	else
	{
		// printf("%s", argv[1]);
		fp = fopen(argv[1], "w");
		fprintf(fp, "hello world!!!\n");
		fclose(fp);
		if (rename(argv[1], argv[2]) == -1)
		{
			printf("rename error!\n");
			exit(-1);
		}
	}
}









