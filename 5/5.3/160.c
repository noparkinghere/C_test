/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ���Ȳ�����
 *		Ҫ�㣺��ѧ�������
 *		
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>



typedef unsigned long int u32;


int Bit(int num, int bit);
bool IsMatch(u32 num);
bool IsSquare(int num);


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
	int one = 0;
	int tmp = 0;
	int len = 0;
	int res1 = 0;
	int res2 = 1;
	int i;
	for (one = 0; res1 != 26 || res2 != 880; one++)
	{
		tmp = one;
		res1 = 0;
		res2 = 1;
		for (len = 0; res1 < 26 && res2 < 880; len++)
		{
			tmp = one;
			res1 = 0;
			res2 = 1;
			for (i = 0; i < 4; i++)
			{
				res1 += tmp;
				res2 *= tmp;
				tmp += len;
			}
		}
		// printf("next");
	}
	one--;
	len--;
	res1 = 0;
	for (i = 0; i < 20; i++)
	{
		printf("%d\t", one);
		one += len;
	}
}


