/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ������������
 *		Ҫ�㣺���������̿���
 * 		�ص㣺����for��������ã�����˼·���㷨
 *
 ********************************************************************************/

 
#include <stdio.h>


void PutCal(int sum);



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
	int sum;
	printf("input the number:\n");
	scanf("%d", &sum);
	PutCal(sum);
}


/*************************************************
	Function: 		PutCal
	Description: 	������
	Calls: 			
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
void PutCal(int sum)
{
	int i, j;
	int tmp;
	int res;
	for (j = 1; res != sum; j++)
	{
		tmp = j;
		res = 0;
		for (i = 0; i < 8; i++)
		{
			res = res + tmp;
			tmp *= 2;
		}		
	}
	printf("result:%d\t%d\t%d\n", j - 1, tmp / 2, res);
}


