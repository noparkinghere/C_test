/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：模拟比赛打分,假定5个裁判
 *		要点：掌握数组使用，注意数组一开始就有长度限制，初始化只能为常量。
 * 		重点：注意二维数组如何使用函数调用，其和二级指针有所不同。
 *
 ********************************************************************************/

 
#include <stdio.h>

#define JUDGER 5

void InputScore(int num, int f_aPlayer[][JUDGER]);
void OutputScore(int num, int f_aPlayer[][JUDGER]);


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
	Description: 	键盘输入数据
	Calls: 			scanf	printf
	Called By:		mian
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
//两种错误用法，注意区别
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
	Description: 	输出数据
	Calls: 			scanf	printf
	Called By:		main
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
//两种错误用法，注意区别
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

