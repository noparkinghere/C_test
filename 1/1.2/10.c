/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ������ж�
 *		Ҫ�㣺����ģ����ƣ����̿���, ע��exit(1)��ҪӦ��stdlib��
 * 
 ********************************************************************************/

 
#include <stdio.h>
#include <stdlib.h>

char ScoreJudge(int input);


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
	int input;
	char grade;
	printf("input the number between 0 and 100:\n");
	scanf("%d", &input);
	grade = ScoreJudge(input);
	printf("%c\n", grade);
}

char ScoreJudge(int input)
{
	if (input < 0 || input > 100)
	{
		printf("error input!\n");
		exit(1);
	}
	
	if (input >= 90)
		return 'A';
	else if (input >= 80 && input < 90)
		return 'B';
	else if (input >= 70 && input < 80)
		return 'C';
	else if (input >= 60 && input < 70)
		return 'D';
	else 
		return 'E';
}

