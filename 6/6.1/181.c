/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ�������д������ļ�
 *		Ҫ�㣺�ļ�����
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
	Description: 	������
	Calls: 			scanf	printf
	Called By:		������
	Input: 			��
	Output: 		��
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
	Description: 	������д���ļ�
	Calls: 			
	Called By:		
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
void fun(char *path)
{
	FILE *fp;
	int i;
	char res[100];
	// scanf("%s", res);	//ע������ʱ%s�ַ����Կո���߻س���Ϊ��������
	while(getchar() != '\n');	//��ȡ������һ�������ַ�
	//���´��������res�д洢��#��Ϊ���������ַ���
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




