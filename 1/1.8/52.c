/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：新同学年龄
 *		要点：函数，流程控制
 * 		重点：特别注意思路方法，如果作为数据处理韪整型没有这么长，作为数组的话却可以方便一个个位进行计算处理。
 *
 ********************************************************************************/

 
#include <stdio.h>


bool JudgeDig(int *array);
long NumMul(int val, int num);
void StoArr(int num, int * arr);

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
	int array[10];
	int i;
	//从年龄从1-100取值
	for (i = 1; i < 100; i++)
	{
		if(NumMul(i, 2) > 99 && NumMul(i, 2) < 1000)
		{
			if(NumMul(i, 3) > 999 && NumMul(i, 3) < 10000)
			{
				if (NumMul(i, 4) > 99999 && NumMul(i, 4) < 1000000)
				{
					//数字分别存入数组中，无所谓顺序
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
	Description: 	判断age中是否还有j这个数字
	Calls: 			scanf	printf
	Called By:		main
	Input: 			无
	Output: 		无
	Return: 		如果含有则返回true
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
	Description: 	判断age中是否还有j这个数字
	Calls: 			scanf	printf
	Called By:		main
	Input: 			无
	Output: 		无
	Return: 		如果含有则返回true
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
	Description: 	数值分别放入数组中去。
	Calls: 			scanf	printf
	Called By:		main
	Input: 			无
	Output: 		无
	Return: 		如果含有则返回true
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

