/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ�������ʱ�ļ�
 *		Ҫ�㣺�ļ�����,ע��linux C��һ���д˺���tmpfile
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





