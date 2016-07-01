/*
 *
 * output the score of all judge
 *
 */
#include <stdio.h>
#define JUDGE 5

int main()
{
	int num;
	int i, j;
	float a[100][JUDGE];
	printf("input the sum!\n");
	scanf(" %d", &num);
	for(i = 0; i < num; i++)
	{
		printf("the score : \n");
		for(j = 0; j < JUDGE; j++)
			scanf(" %f", &a[i][j]);
	}

	printf("PLAYER\tJUDGE1\tJUDGE2\tJUDGE3\tJUDGE4\tJUDGE5\n");
	
	for(i = 0; i < num; i++)
	{
		printf("PLAYER%d\t", i + 1);
		for(j = 0; j < JUDGE; j++)
		{
			printf("%.2f\t", a[i][j]);
		}
		printf("\n");
	}
}
 
