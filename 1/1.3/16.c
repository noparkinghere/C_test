/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ���ӡ9*9�˷���
 *		Ҫ�㣺�򵥵����̿��ƽṹ
 * 
 ********************************************************************************/

 
#include <stdio.h>
#include <math.h>


#define PI 3.14

void MutiTable(void);


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
	MutiTable();
}

/*************************************************
	Function: 		MutiTable
	Description: 	�˷������
	Calls: 			printf
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
void MutiTable(void)
{
	int i, j;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d ", i, j, i * j);	//ע��dos��һ�в�����ӡ
		}
		printf("\n");
	}
}

