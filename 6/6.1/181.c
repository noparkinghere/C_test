/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：将数据写入磁盘文件
 *		要点：文件操作
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define NUM 5


#define MALLOC(type,n)	((type*)malloc(sizeof(type)*n))


// double tmp1;

void fun(char *path);

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
	char path[20];
	scanf("%s", path);
	fun(path);
}


/*************************************************
	Function: 		fun
	Description: 	将数据写入文件
	Calls: 			
	Called By:		
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
void fun(char *path)
{
	FILE *fp;
	int i;
	char res[100];
	// scanf("%s", res);	//注意输入时%s字符串以空格或者回车作为结束符。
	while(getchar() != '\n');	//读取并过滤一个换行字符
	//以下代码可以让res中存储以#作为结束符的字符串
	for (i = 0; (res[i]=getchar()) != '#'; i++)
	;
	res[i] = '\0';
	
	if (fp = fopen(path, "w") != NULL)
	{
		printf("cannot open file!\n");
		exit(0);
	}
	fprintf(fp, "%s", res);
	fclose(fp);
}




