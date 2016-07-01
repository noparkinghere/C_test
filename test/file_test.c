#include <stdio.h>
#include <stdlib.h>

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
	if ((fp = fopen("c:\\haha", "w")) == NULL)
	{
		printf("cannot open!");
		exit(0);
	}
	fprintf(fp, "hello,world!\n");
}

