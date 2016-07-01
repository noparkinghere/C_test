/*
 *
 * input ten num, get the sum of the two datas
 *
 */

#include <stdio.h>
#define NUM 10

int main()
{
	int a[NUM];
	int b[NUM];
	int i;
	
	printf("input the numbers!\n");
	for(i = 0; i < NUM; i++)
		scanf(" %d", &a[i]);

	for(i = 0; i < NUM - 1; i++)
	{
		b[i] = a[i] + a[i + 1];
		printf("%d\t", b[i]);
	}
	printf("\n");
}
