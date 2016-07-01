/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：找最高分
 *		要点：结构体的初步应用和了解
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>

#define NUM 5




typedef struct
{
	int num;
	char name[20];
	char sex;
	int age;
	float score;
}struStudent;


struStudent MaxScore(struStudent *Student);
struStudent MinScore(struStudent *Student);

int main(void)
{
	struStudent Student[NUM] = {
		{1000, "LiMing", 'M', 16, 99.5},
		{1001, "NinBo", 'M', 15, 91},
		{1002, "XuXin", 'F', 14, 100},
		{1003, "Gaoyang", 'M', 15, 75.5},
		{1004, "ZhangYu", 'F', 15, 55.5},
	};
	struStudent StudentTmp;


	StudentTmp = MaxScore(Student);
	printf("num:%d\n", StudentTmp.num);
	printf("name:%s\n", StudentTmp.name);
	printf("sex:%c\n", StudentTmp.sex);
	printf("age:%d\n", StudentTmp.age);
	printf("score:%.1f\n", StudentTmp.score);
	
	StudentTmp = MinScore(Student);
	printf("num:%d\n", StudentTmp.num);
	printf("name:%s\n", StudentTmp.name);
	printf("sex:%c\n", StudentTmp.sex);
	printf("age:%d\n", StudentTmp.age);
	printf("score:%.1f\n", StudentTmp.score);
}

struStudent MaxScore(struStudent *Student)
{
	int i;
	struStudent StudentTmp = Student[0];
	for (i = 1; i < NUM; i++)
	{
		if (Student[i].score > StudentTmp.score)
			StudentTmp = Student[i];
	}
	return StudentTmp;
}

struStudent MinScore(struStudent *Student)
{
	int i;
	struStudent StudentTmp = Student[0];
	for (i = 1; i < NUM; i++)
	{
		if (Student[i].score < StudentTmp.score)
			StudentTmp = Student[i];
	}	
	return StudentTmp;
}

