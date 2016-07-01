/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：平均成绩
 *		要点：结构体的初步应用和了解
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

