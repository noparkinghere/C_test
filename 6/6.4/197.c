/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ�ͬʱ��ʾ�����ļ�������
 *		Ҫ�㣺�ļ�����,gcc��û�ҵ������������������������196��ͬ
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
// #include <io.h>



#define MALLOC(type, num) (type*)malloc(sizeof(type)*num)



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
	FILE **fp = NULL;
	int filenum = 1000;
	char c;
	char path[20];
	int num;
	printf("input the numbers of open file:\n");
	scanf("%d", &num);
	fp = MALLOC(FILE*, num);	//ÿ�ζ�̬����ʱ���ر�ע��ԭ�������num��������1����Ȼ1Ҳ����ʹ�á�
	for (int i = 0; i < num; i++)
	{
		printf("input the file path:\n");
		scanf("%s", path);
		if ((fp[i] = fopen(path, "r")) == NULL)
		{
			printf("file error!");
			exit(1);
		}
		
		while ((c = fgetc(fp[i])) != EOF)
		{
			putchar(c);
		}
	}
	
	printf("%d\n", filenum);
	// filenum = fcloseall();
	for (int i = 0; i < num; i++)
	{
		fclose(fp[i]);
	}
	printf("%d\n", filenum);
}





