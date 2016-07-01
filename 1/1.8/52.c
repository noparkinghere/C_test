/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ���ͬѧ����
 *		Ҫ�㣺���������̿���
 * 		�ص㣺�ر�ע��˼·�����������Ϊ���ݴ��������û����ô������Ϊ����Ļ�ȴ���Է���һ����λ���м��㴦��
 *
 ********************************************************************************/

 
#include <stdio.h>


bool JudgeDig(int *array);
long NumMul(int val, int num);
void StoArr(int num, int * arr);

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
	int array[10];
	int i;
	//�������1-100ȡֵ
	for (i = 1; i < 100; i++)
	{
		if(NumMul(i, 2) > 99 && NumMul(i, 2) < 1000)
		{
			if(NumMul(i, 3) > 999 && NumMul(i, 3) < 10000)
			{
				if (NumMul(i, 4) > 99999 && NumMul(i, 4) < 1000000)
				{
					//���ֱַ���������У�����ν˳��
					StoArr(NumMul(i, 3), array);
					StoArr(NumMul(i, 4), array + 4);
					if (JudgeDig(array))
					{
						printf("age:%d\n", i);
					}
				}
			}
		}
	}
}


/*************************************************
	Function: 		JudgeDig
	Description: 	�ж�age���Ƿ���j�������
	Calls: 			scanf	printf
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		��������򷵻�true
*************************************************/
bool JudgeDig(int *array)
{
	int i, j;
	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
			if (array[i] == array[j])
				return false;		
	}
	for (i = 0; i < 10; i++)
		printf("%d\t", array[i]);
	printf("\n");
	return true;
}

/*************************************************
	Function: 		JudgeDig
	Description: 	�ж�age���Ƿ���j�������
	Calls: 			scanf	printf
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		��������򷵻�true
*************************************************/
long NumMul(int val, int num)
{
	long res = val;
	while (num != 1)
	{
		res *= val;
		num--;
	}
	// printf("%d\n", res);
	return res;
}


/*************************************************
	Function: 		StoArr
	Description: 	��ֵ�ֱ����������ȥ��
	Calls: 			scanf	printf
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		��������򷵻�true
*************************************************/
void StoArr(int num, int * arr)
{
	int i = 0;
	while (num != 0)
	{
		arr[i] = num % 10;
		num /= 10;
		i++;
	}	
}

