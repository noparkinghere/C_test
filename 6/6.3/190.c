/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：创建文件
 *		要点：文件操作,creat
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <fcntl.h>
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
	char path[20];
	printf("input the path:\n");
	scanf("%s", path);
	if (creat(path, S_IRUSR) == -1)
	{
		printf("creat error!\n");
	}
	else
	{
		printf("creat right!\n");
	}
}





