/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ����n����������
 *		Ҫ�㣺����
 *		ע�⣺for��������ֵ����ʱ��ע��i��j�Ƿ��������ʹ�ã����
 *		ʹ�õĻ�������i++�Ȼ�Ӱ�������
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MALLOC(type,n)	((type*)malloc(sizeof(type)*n))



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
	int n, i, j, k, l;
	int num;
	int cnt = 1;
	int sum;
	int **arr;
	scanf("%d", &num);
	sum = num*num;
	
	//��̬�ڴ����
	arr = MALLOC(int*,num);
	for (i = 0; i < num; i++)
	{
		arr[i] = MALLOC(int,num);
	}

	for (n = 0; cnt <= sum; n++)
	{
		// ���������ĸ���λһ�δ���ֵ
		for (i = n; i < num-n; i++)	
		{
			arr[n][i] = cnt++;
			// printf("%d\t", arr[n][i]);
		}
		i--;	//�ر�ע��������Ҫʹ��i��ԭֵ��������Ҫ������
		for (j = n+1; j < num-n; j++)	
		{
			arr[j][i] = cnt++;
			// printf("%d\t", arr[j][i]);
		}
		j--;
		for (k = num-n-2; k >= n ; k--)
		{
			arr[j][k] = cnt++;
			// printf("%d\t", arr[j][k]);
		}
		k++;
		for (l = num-2-n; l >= n+1; l--)
		{
			arr[l][k] = cnt++;	
			// printf("%d\t%d\t%d\t", l, k, arr[l][k]);
		}
		l++;
		// printf("\n");	

	}	//end of for
	
	// for (i = 0; i < num; i++)
	// {
		// for (j = 0; j < num; j++)
		// {
			// arr[i][j] = cnt++;
		// }
		// printf("\n");
	// }
	
	for (i = 0; i < num; i++)
	{
		for (j = 0; j < num; j++)
		{
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
}

