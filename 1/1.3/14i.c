/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ��÷��Ŵ�ӡͼ��
 *		Ҫ�㣺���������̿���
 * 		�ص㣺����for��������ã�����˼·���㷨
 *
 ********************************************************************************/

 
#include <stdio.h>


void PrintChart1(int f_row, char f_sym);
void PrintChart2(int f_row, char f_sym);
void PrintChart3(int f_row, char f_sym);


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
	int i;
	int row;
	char sym;
	printf("input the row and the symbol, seperating them with blankspace:\n");
	scanf("%d %c", &row, &sym);
	PrintChart1(row, sym);
	//����Ϊ��һ�����е�ͼ��
	PrintChart2(row, sym);
	PrintChart3(row, sym);
}

/*************************************************
	Function: 		PrintChart1
	Description: 	ͼ��1
	Calls: 			printf
	Called By:		main
	Input: 			int f_row, char f_sym
	Output: 		��
	Return: 		0
*************************************************/
void PrintChart1(int f_row, char f_sym)
{
	int i, j;
	for (i = 0; i < f_row; i++)
	{
		for (j = 0; j < i; j++)
			printf(" ");
		for (j = 0; j < f_row; j++)
			printf("%c", f_sym);
		printf("\n");
	}
}

/*************************************************
	Function: 		PrintChart2
	Description: 	ͼ��2
	Calls: 			printf
	Called By:		main
	Input: 			int f_row, char f_sym
	Output: 		��
	Return: 		0
*************************************************/
void PrintChart2(int f_row, char f_sym)
{
	int i, j;
	for (i = 0; i < f_row / 2; i++)
	{
		for (j = 0; j < f_row; j++)
			printf("%c", f_sym);
		printf("\n");
		for (j = 0; j <= i; j++)
			printf(" ");
		for (j = 0; j < f_row; j++)
			printf("%c", f_sym);
		printf("\n");
	}
}

/*************************************************
	Function: 		PrintChart3
	Description: 	ͼ��3
	Calls: 			printf
	Called By:		main
	Input: 			int f_row, char f_sym
	Output: 		��
	Return: 		0
*************************************************/
void PrintChart3(int f_row, char f_sym)
{
	int i, j;
	for (i = 0; i < f_row; i++)
	{
		for (j = 0; j < i; j++)
			printf(" ");
		if (i < f_row - 1)
			printf("#");
		for (j = 0; j < (f_row - i) * 2 - 3; j++)
			printf("%c", f_sym);
		printf("#");
		printf("\n");
	}
}


