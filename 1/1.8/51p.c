/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ���ʦ���ǹ����⣬���ⲻ��������䣺ÿ��С�������շֵ�һ������ǹ�
 *		Ҫ�㣺���̿���
 *
 ********************************************************************************/

 
#include <stdio.h>




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
	int i, j;
	int rest, sum1, sum2;
	int flag = 0;
	for (i = 1; rest != 0 || flag != 0; i++)	//iΪ�ܹ�����
	{
		sum1 = 0;
		sum2 = 0;
		for (j = 1, rest = i; j < i && rest != 0; j++)	//jΪѧ������
		{
			sum1 = sum2;
			sum2 = j + (rest - j) / 10;
			rest = rest - sum2;
			if (sum1 != sum2)
			{
				flag = 1;
				break;
			}
		}
	}
	printf("%d\t%d\n", i - 1);
}




