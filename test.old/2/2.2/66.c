/*
 *
 * get the max and the min
 *
 */
#include <stdlib.h>
#include <stdio.h>
int max(int *a, int num);
int min(int *a, int num);

int main()
{
	int max_n, min_n;
	int num, i;
	int *a;
	printf("input the num:\n");
	scanf(" %d", &num);
	a = (int *)malloc(sizeof(int) * num);
	printf("input the all nums:\n");
	for(i = 0; i < num; i++)
		scanf(" %d", (a + i));

	max_n = max(a, num);
	min_n = min(a, num);
	printf("%d\t%d\n", max_n, min_n);
}

int max(int *a, int num)
{
	int max_n = *a, i;
	for(i = 0; i < num; i++)
	{
		if (max_n < *(a + i))
			max_n = *(a + i);
	}
	return max_n;
}

int min(int *a, int num)
{
	int min_n = *a, i;
	for(i = 0; i < num; i++)
	{
		if (min_n > *(a + i))
			min_n = *(a + i);
	}
	return min_n;
}
