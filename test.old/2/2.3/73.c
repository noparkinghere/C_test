/*
 *
 * find the first same element 
 * int the two arrays
 *
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int find (int *p, int *q, int num);
int main()
{
	int *p, *q;
	int i, n, num;
	puts("input the length:");
	scanf(" %d", &num);
	p = q = (int *)malloc(sizeof(int) * num);
	printf("input the p:\n");
	for (i = 0; i < num; i++)
	{
		scanf(" %d", p + i);
	}
	puts("input the q:");
	for (i = 0; i < num; i++)
	{
		scanf(" %d", q + i);
	}
	n = find(p, q, num);
	printf("%d\n", n);
}

int find(int * p, int * q, int num)
{
	int i, j;
	for (i = 0; i < num; i++)
	{
		for (j = 0; j < num; j++)
		{
			if (*(p + i) == *(q + j))
				return *(p + i);
		}
	}
	
}

