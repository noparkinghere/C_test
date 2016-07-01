/*
 *
 * output average height
 *
 */

#include <stdio.h>
#include <stdlib.h>
void ave(float *ht, int num);
int main()
{
	int num;
	float *ht = (float*)malloc(sizeof(float) * 1000);
	printf("input the number:\n");
	scanf(" %d", &num);
	printf("input the data:\n");
	ave(ht, num);
}

void ave(float * ht, int num)
{
	int i;
	float result = 0;
	for(i = 0; i < num; i++)
	{
		scanf(" %f", ht + i);
	
		result += *(ht + i);
	}
	printf("the average : %f", result / num);
}
