/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：关闭打开的所有文件
 *		要点：文件操作,gcc中没找到案例中所述函数
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
	Description: 	主函数
	Calls: 			scanf	printf
	Called By:		编译器
	Input: 			无
	Output: 		无
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
	fp = MALLOC(FILE*, num);	//每次动态分配时候，特别注意原理，这边是num，而不是1，虽然1也可以使用。
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





