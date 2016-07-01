/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：结构体基本应用
 *		要点：结构体的初步应用和了解
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>

void strcpy(char *p, char *tmp);


typedef struct
{
	int num;
	char name[20];
	char sex;
	int age;
	float score;
}struStudent;

int main(void)
{
	struStudent Student;
	Student.num = 1000;
	strcpy(Student.name, "LiMing");
	Student.sex = 'M';
	Student.age = 16;
	Student.score = 99.9;
	printf("num:%d\n", Student.num);
	printf("name:%s\n", Student.name);
	printf("sex:%c\n", Student.sex);
	printf("age:%d\n", Student.age);
	printf("score:%.1f\n", Student.score);
}

void strcpy(char *p, char *tmp)
{
	int i;
	for (i = 0; tmp[i] != '\0'; i++)
		p[i] = tmp[i];
	p[i] = '\0';
}


