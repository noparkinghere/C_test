/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ��������ļ�
 *		Ҫ�㣺�ļ�����,ע��main�Ĳ���ʹ��
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





