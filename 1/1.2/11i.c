/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ�����Ӽ�������
 *		Ҫ�㣺��������ĵ��ã�ģ��������̿���
 * 
 ********************************************************************************/

 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char ScoreJudge(int input);
int RanFun(char symbol, int max);


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
	char symbol;
	int max;

	printf("select the sign:\n");
	scanf("%c", &symbol);
	printf("input the max number:\n");
	scanf("%d", &max);
	// printf("%d\n", time(0));
	srand((unsigned long)time(0));	//ϵͳʱ�������趨�����Ը���ʱ������������

	RanFun(symbol, max);	
}

int RanFun(char symbol, int max)
{
	int tmp1, tmp2;
	int res;
	
	tmp1 = rand() % max;
	tmp2 = rand() % max;
	if ('+' == symbol)
	{
		res = tmp1 + tmp2;
		printf("%d + %d = %d\n", tmp1, tmp2, res);
		return 0;
	}
	else if ('-' == symbol)
	{
		res = tmp1 - tmp2;
		printf("%d - %d = %d\n", tmp1, tmp2, res);
		return 0;
	}
	else
	{
		printf("error symbol!\n");
		exit(1);
	}
}

