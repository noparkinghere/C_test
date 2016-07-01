/*
 *
 * struct
 *
 */
#include <stdio.h>
#include <string.h>
typedef struct student
{
	unsigned long number;
	char name[10];
	char sex;
	int age;
	float score;
}Student;
int main()
{
	Student s1;
	puts("number:");
	scanf(" %d", &s1.number);
	puts("name:");
	scanf(" %s", s1.name);
	puts("sex:");
	scanf(" %c", &s1.sex);
	puts("age:");
	scanf(" %d", &s1.age);
	puts("score:");
	scanf(" %f", &s1.score);

	printf("%d\t%s\t%c\t%d\t%.2f\n", \
			s1.number, s1.name, s1.sex, \
			s1.age, s1.score);

}
