/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ��ټ���Ǯ,ע�������Ŀ����Ҫ��1��Ǯ��ҲҪ��1�ټ�
 *		Ҫ�㣺�궨���ʹ�ã���Ϊ�����Ļ����ú궨�������ȱ��������ʡ�
 *
 ********************************************************************************/

 
#include <stdio.h>

#define COCK 5
#define HEN 3
#define CHICK 1
#define MONEY 100

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
	int i, j, k;
	for (i = 0; i < MONEY / COCK; i++)
	{
		for (j = 0; j < MONEY / HEN; j++)
		{
			for (k = 0; k < MONEY / CHICK; k++)
			{
				if (i * COCK + j * HEN + k * CHICK == MONEY	\
					&& i + j + 3 * k == 100)
					printf("cock:%d\then%d\tchicks:%d\n", i, j, k * 3);
			}
		}
	}
}

