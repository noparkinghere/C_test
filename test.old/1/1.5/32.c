/*
 *
 * record the scores of the students
 *
 */
 
#include <stdio.h>
#define CLASS 3

int main()
{
	int num, i, j, sum = 0;
	int input[100][CLASS];

	printf("the number of the students\n");
	scanf(" %d", &num);

	printf("input the student's data\n");
	for (i = 0; i < num; i++)
	{
		printf("NO:%d\t", i + 1);
		for (j = 0; j < CLASS; j++)
			scanf(" %d", &input[i][j]);
	}

	printf("number\t");
	printf("Chinese\tMath\tEnglish\tAvarage\n");

	for (i = 0; i < num; i++)
	{
		printf("%d\t", i + 1);
		for(j = 0; j < CLASS; j++)
		{
			printf("%d\t", input[i][j]);
			sum += input[i][j];
		}
		printf("%d", sum / CLASS);
		printf("\n");
	}
}
