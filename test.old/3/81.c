/*
 *
 * struct student
 *
 */
#include <stdio.h>

typedef struct
{
	double num;
	char name[20];
	char sex;
	int age;
	float score;
}Student;

int main()
{
	Student a;
	printf("num:\t");
	scanf("%f", &a.num);
	printf("name:\t");
	scanf("%s", a.name);
	getchar();		//char sex will read the \n 
	printf("sex:\t");
	scanf("%c", &a.sex);
	printf("age:\t");
	scanf("%d", &a.age);
	printf("score:\t");
	scanf("%f", &a.score);

	printf("num:\t%.0f\n", a.num);
	printf("name:\t%s\n", a.name);
	printf("sex:\t%c\n", a.sex);
	printf("age:\t%d\n", a.age);
	printf("score:\t%.2f\n", a.score);
}
