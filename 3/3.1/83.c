/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ�ƽ���ɼ�
 *		Ҫ�㣺�ṹ��ĳ���Ӧ�ú��˽�
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>

#define NUM 5




typedef struct
{
	int mid;
	int end;
	float ave;
}struScore;

 

int main(void)
{
	struScore Score;
	printf("mid:");
	scanf("%d", &Score.mid);
	printf("end:");
	scanf("%d", &Score.end);
	Score.ave = (Score.mid + Score.end) / 2.0;
	printf("%.1f\n", Score.ave);
}

