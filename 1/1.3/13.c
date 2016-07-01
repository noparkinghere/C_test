/****************************** (C) COPYRIGHT 2016 *******************************
 
 *  	���ܣ��÷��Ŵ�ӡ������
 *		Ҫ�㣺���������̿���
 * 
 ********************************************************************************/

 
#include <stdio.h>


void PrintTriag(int f_row, char f_sym);


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
	PrintTriag(row, sym);
}

/*************************************************
	Function: 		PrintTriag
	Description: 	��ӡ������
	Calls: 			printf
	Called By:		main
	Input: 			int f_row, char f_sym
	Output: 		��
	Return: 		0
*************************************************/
void PrintTriag(int f_row, char f_sym)
{
	int i, j;
	for (i = 0; i < f_row; i++)
	{
		for (j = f_row - i; j > 0; j--)
			printf(" ");
		for (j = 0; j < i * 2 - 1; j++)
			printf("%c", f_sym);
		printf("\n");
	}
}

