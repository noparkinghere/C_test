#include <stdio.h>
#include <stdlib.h>

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
	if ((fp = fopen("c:\\haha", "w")) == NULL)
	{
		printf("cannot open!");
		exit(0);
	}
	fprintf(fp, "hello,world!\n");
}

