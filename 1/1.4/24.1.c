/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ���1 + 1/2 + 1/3 + ... + 1/n
 *		Ҫ�㣺���������̿���
 * 		�ص㣺����for��������ã�����˼·���㷨
 *
 ********************************************************************************/

 
#include <stdio.h>


double SumMuti(int num);
void PrintNum(int num);


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
	int num;
	double res;
	printf("input the number:\n");
	scanf("%d", &num);
	PrintNum(num);
}

void PrintNum(int num)
{
	int i;
	int a[200];
	int odd = 0;
	int even = 0;
	for (i = 0; i < 200; i++)
	{
		if (getchar() == '\n')
			continue;
		if ((a[i] = getchar()) != '#')	
		{		
			if (0 == a[i] % 2)
				even++;
			else 
				odd++;
		}	
		else
			break;
	}	
	printf("odd:%d\teven:%d\n", odd, even);
}


