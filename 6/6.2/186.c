/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ������ļ����ݵ���һ�ļ�
 *		Ҫ�㣺�ļ�����
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


#define LEN		200


void fun(char *src, char *obj);



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
	char src[20];
	char obj[20];
	printf("input source path:\n");
	scanf("%s", src);
	printf("input object path:\n");
	scanf("%s", obj);
	fun(src, obj);
}




/*************************************************
	Function: 		fun
	Description: 	�����ļ����ݲ���
	Calls: 			
	Called By:		
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
void fun(char *src, char *obj)
{
	FILE *fp1;
	FILE *fp2;
	char c;
	fp1 = fopen(src, "r");
	fp2 = fopen(obj, "w");
	
	//���ַ�ʽ��Ҫ��Ϊ�˲����EOF������ܻ�����һ�������ַ�
	// c = fgetc(fp1);
	// while (c != EOF)
	// {
		// fputc(c, fp2);
		// c = fgetc(fp1);
	// }
	
	//���ַ�ʽ��Ҫ��Ϊ�˲����EOF������ܻ�����һ�������ַ�
	while ((c = fgetc(fp1)) != EOF)
	{
		fputc(c, fp2);
	}
	
	fclose(fp1);
	fclose(fp2);
}




