/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ�ģ��������,�ٶ�5������
 *		Ҫ�㣺��������ʹ�ã�ע������һ��ʼ���г������ƣ���ʼ��ֻ��Ϊ������
 * 		�ص㣺ע���ά�������ʹ�ú������ã���Ͷ���ָ��������ͬ��
 *
 ********************************************************************************/

 
#include <stdio.h>

#define JUDGER 5

void InputScore(int num, int f_aPlayer[][JUDGER]);
void OutputScore(int num, int f_aPlayer[][JUDGER]);


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

	int aPlayer[100][JUDGER];
//	int **aPlayer;
	int iPlyNum;
	printf("input the number of player:\n");
	scanf("%d", &iPlyNum);
	InputScore(iPlyNum, aPlayer);
	OutputScore(iPlyNum, aPlayer);
}

/*************************************************
	Function: 		InputScore
	Description: 	������������
	Calls: 			scanf	printf
	Called By:		mian
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
//���ִ����÷���ע������
//void InputScore(int num, int f_aPlayer[][])
//void InputScore(int num, int **f_aPlayer)
void InputScore(int num, int f_aPlayer[][JUDGER])
{
	int i, j;
	for (i = 0; i < num; i++)
	{
		printf("input the score of player&d:\n", i + 1);
		for (j = 0; j < JUDGER; j++)
			scanf("%d", &f_aPlayer[i][j]);
	}
}

/*************************************************
	Function: 		OutputScore
	Description: 	�������
	Calls: 			scanf	printf
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
//���ִ����÷���ע������
// void OutputScore(int num, int f_aPlayer[][])
// void OutputScore(int num, int **f_aPlayer)
void OutputScore(int num, int f_aPlayer[][JUDGER])
{
	int i, j;
	int sum;
	printf("player\tjudgeA\tjudgeB\tjudgeC\tjudgeD\tjudgeE\ttotal\n");
	for (i = 0; i < num; i++)
	{
		sum = 0;
		printf("player%d\t", i + 1);
		for (j = 0; j < JUDGER; j++)
		{
			printf("%d\t", f_aPlayer[i][j]);
			sum += f_aPlayer[i][j];
		}
		printf("%d\n", sum);
	}
}

