/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ������ļ�
 *		Ҫ�㣺�ļ�����,creat
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
	Description: 	������
	Calls: 			scanf	printf
	Called By:		������
	Input: 			��
	Output: 		��
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





