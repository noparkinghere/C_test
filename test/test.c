/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ�����ת������
 * 
 ********************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#define MALLOC(type, n) (type *)malloc(sizeof(type)*n)


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
	// const char *p = MALLOC(char, 10);
	// *(p+2) = 'w';
	char *p = MALLOC(char, 1);
	for (int i = 0; i < 3; i++)
	{
		scanf("%c", &p[i]);	
	}
	
	for (int i = 0; i < 3; i++)
	{
		printf("%c\t", p[i]);	
	}
}


