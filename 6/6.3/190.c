/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ������ļ�
 *		Ҫ�㣺�ļ�����,creat
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <fcntl.h>
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





