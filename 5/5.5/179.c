/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ��ɷ�ƻ������
 *		Ҫ�㣺�����е���ѧ����
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define NUM 5



// double tmp1;

void fun(int *a);

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
	int a[7] = {0};	//a1-a6�����ϴ���6
	fun(a);
	for (int i = 1; i <= 6; i++)
	{
		printf("a[%d] : %d\n", i, a[i]);
	}
}



/*************************************************
	Function: 		fun
	Description: 	��ƻ��
	Calls: 			
	Called By:		
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
void fun(int *a)
{
	int tmp[7] = {0};
	int cnt[7] = {0, 8, 7, 6, 5, 4, 3};
	int ave = 2520 / 6;
	for (int i = 2; i <= 6; i++)
	{
		tmp[i] = ave * cnt[i] / (cnt[i] - 1);
		// printf("%d\n", tmp[i]);

	}
	a[1] = (ave - tmp[6] / 3) * 8 / 7;

	tmp[1] = a[1];
	for (int i = 2; i <= 6; i++)
	{
		a[i] = tmp[i] - tmp[i-1] / cnt[i-1];
	}
}



