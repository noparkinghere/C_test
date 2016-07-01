/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：求1 + 1/2 + 1/3 + ... + 1/n
 *		要点：函数，流程控制
 * 		重点：掌握for的灵活运用，程序思路和算法
 *
 ********************************************************************************/

 
#include <stdio.h>


double SumMuti(int num);
void PrintNum(int num);


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


