/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：求解n阶螺旋方程
 *		要点：矩阵
 *		注意：for中在做数值运算时，注意i，j是否后续还会使用，如果
 *		使用的话，最后的i++等会影响操作。
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MALLOC(type,n)	((type*)malloc(sizeof(type)*n))



/*************************************************
	Function: 		main
	Description: 	主函数
	Calls: 			scanf	printf
	Called By:		编译器
	Input: 			无
	Output: 		无
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
	
	//动态内存分配
	arr = MALLOC(int*,num);
	for (i = 0; i < num; i++)
	{
		arr[i] = MALLOC(int,num);
	}

	for (n = 0; cnt <= sum; n++)
	{
		// ↑→↓←四个方位一次存入值
		for (i = n; i < num-n; i++)	
		{
			arr[n][i] = cnt++;
			// printf("%d\t", arr[n][i]);
		}
		i--;	//特别注意下面需要使用i的原值，所以需要处理下
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

